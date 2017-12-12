#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n, brand[N], price[N], temp, q, d, k, b[6];
vector < vector<int> > a(6);
map< set<int> , vector<int> > mp;


void compute(int i, set<int> s, vector<int> v) {
    if (i == 6) {
        sort(v.begin(), v.end());
        mp[s] = v;
        return;
    }
    compute(i + 1, s, v);
    s.insert(i);
    v.insert(v.end(), a[i].begin(), a[i].end());
    compute(i + 1, s, v);

}


int main() {
    
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> brand[i];
    for (int i = 0; i < n; ++i) cin >> temp, a[brand[i]].emplace_back(temp);
    set<int> s;
    vector<int> v;
    compute(1, s, v);
    cin >> q;
    while (q--) {
        cin >> d;
        set<int> tp;
        for (int i = 0; i < d; ++i) cin >> b[i], tp.insert(b[i]);
        cin >> k;
        if (mp[tp].size() < k) cout << -1 << '\n';
        else cout << mp[tp][k - 1] << '\n';
    }
    
    return 0;
}
