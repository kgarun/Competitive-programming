#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5, MOD = 1e9;
ll n, m, a[N], f[40], type, l, r, t[4 * N];


ll value(ll i) {
    return ((i >= 40) ? 0 : f[i]) % MOD;

}

void build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        t[v] = value(a[tl]);
        return;
    }
    ll mid = (tl + tr) / 2;
    build(v * 2, tl, mid);
    build(v * 2 + 1, mid + 1, tr);
    t[v] = (t[v * 2] + t[v * 2 + 1]) % MOD;
}

ll query(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr) {
        return t[v] % MOD;
    }
    ll tm = (tl + tr) / 2;

    return ( query(v * 2, tl, tm, l, min(r, tm)) + query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r) ) % MOD;
}

void update(ll v, ll tl, ll tr, ll pos, ll new_value) {
    if (tl == tr) {
        t[v] = new_value % MOD;
    }
    else {
        ll tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v * 2, tl, tm, pos, new_value);
        else
            update(v * 2 + 1, tm + 1, tr, pos, new_value);
        t[v] = (t[v * 2] + t[v * 2 + 1]) % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<int> s;
    f[0] = 1;
    for (ll i = 1; i < 40; ++i) f[i] = (f[i - 1] * i) % MOD;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 40) s.insert(i);
    }
    build(1, 0, n - 1);
    while (m--) {
        cin >> type >> l >> r;
        if (type == 1) {
            --l, --r;
            vector<ll> tp;
            for (auto ptr = s.lower_bound(l) ; ptr != s.end() && *ptr <= r; ++ptr) {
                ll i = *ptr;
                a[i] += 1;
                if (a[i] >= 40) tp.emplace_back(i);
                update(1, 0, n - 1, i, value(a[i]));
            }
            for (auto vv : tp) s.erase(vv);

        }
        else if (type == 2) {
            --l, --r;
            cout << query(1, 0, n - 1, l, r) << '\n';

        }
        else {
            --l;
            ll temp = a[l];
            if (a[l] < 40) s.erase(l);
            a[l] = r;
            if (a[l] < 40) s.insert(l);
            if (temp >= 40 && a[l] >= 40) continue;
            update(1, 0, n - 1, l, value(a[l]));
        }
    }

    return 0;
}
