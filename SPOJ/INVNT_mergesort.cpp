
/*
ID: kgarun51
PROG:
LANG: C++11
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 2e5 + 5, MOD = 1e9 + 7;

ll n, a[N], inv = 0;

void merge(ll l, ll r) {

	ll m = (l + r) / 2, i = l, j = m + 1, b[r - l + 1], k = 0;

	while (i <= m && j <= r) {

		if (a[i] <= a[j]) {

			b[k++] = a[i++];

		} else {

			b[k++] = a[j++];

			inv += m - i + 1;

		}

	}

	while (i <= m) b[k++] = a[i++];

	while (j <= r) b[k++] = a[j++];

	for (ll i = 0; i < k; ++i) a[l + i] = b[i];

}

void msort(ll l, ll r) {

	if (l >= r ) return;

	ll m = (l + r) / 2;

	msort(l, m);

	msort(m + 1, r);

	merge(l, r);

}



int main(void) {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll testcase;

	cin >> testcase;

	for (int t = 1; t <= testcase; ++t) {

		inv = 0;

		cin >> n;

		for (ll i = 0; i < n; ++i) cin >> a[i];

		msort(0, n - 1);

		// for (ll i = 0; i < n; ++i) cout << a[i] << " ";

		// cout << '\n';

		cout << inv << '\n';

	}

	return 0;
}
