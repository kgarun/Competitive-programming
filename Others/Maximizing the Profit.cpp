#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5 + 5, MOD = 1e9 + 7;

#define sentinal -12345678912345

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	struct { ll val, l1, l2, r1, r2; } a[n];

	for (int i = 0; i < n; ++i) cin >> a[i].val;

	set<ll> minset, maxset;

	for (int i = 0; i < n; ++i) {
		if (minset.size()) {
			if (*minset.begin() < a[i].val) a[i].l1 = *minset.begin();
			else a[i].l1 = sentinal;
			auto ptr = minset.lower_bound(a[i].val);
			if (ptr != minset.begin()) {
				--ptr;
				a[i].l2 = *ptr;
			}
			else a[i].l2 = sentinal;
		}
		else {
			a[i].l1 = sentinal;
			a[i].l2 = sentinal;
		}
		minset.insert(a[i].val);
	}

	for (int i = n - 1; i >= 0; --i) {
		if (maxset.size()) {
			if (*maxset.rbegin() > a[i].val) a[i].r2 = *maxset.rbegin();
			else a[i].r2 = sentinal;
			auto ptr = maxset.upper_bound(a[i].val);
			if (ptr != maxset.end()) a[i].r1 = *ptr;
			else a[i].r1 = sentinal;
		}
		else {
			a[i].r1 = sentinal;
			a[i].r2 = sentinal;
		}
		maxset.insert(a[i].val);
	}

	ll ans = sentinal;

	for (int i = 0; i < n; ++i) {
		ll v1, v2, v3, v4;
		v1 = v2 = v3 = v4 = sentinal;
		if (a[i].l1 != sentinal and a[i].r1 != sentinal) v1 = a[i].l1 * a[i].val * a[i].r1;
		if (a[i].l1 != sentinal and a[i].r2 != sentinal) v2 = a[i].l1 * a[i].val * a[i].r2;
		if (a[i].l2 != sentinal and a[i].r1 != sentinal) v3 = a[i].l2 * a[i].val * a[i].r1;
		if (a[i].l2 != sentinal and a[i].r2 != sentinal) v4 = a[i].l2 * a[i].val * a[i].r2;
		ans = max({ans, v1, v2, v3, v4});
	}

	if (ans == sentinal) cout << -1 << '\n';
	else cout << ans << '\n';

	return 0;
}