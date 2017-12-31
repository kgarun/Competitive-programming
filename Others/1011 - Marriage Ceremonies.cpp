/*
* @Author: kg
* @Date:   2017-12-31 16:21:40
* @Last Modified by:   kg
* @Last Modified time: 2017-12-31 16:34:13
*/
#include <bits/stdc++.h>

#define mp make_pair
#define rz resize
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define pb push_back
#define um unordered_map
#define mkp(x,y) make_pair((x),(y))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FOR(x,n) for(ll i=(x);i<(n);++i)
#define Case(x) cout << "Case " << (x) << ": "
#define speedum(x) (x).reserve(1024); (x).max_load_factor(0.25)
#define print1(x) cout << (x) << '\n'
#define print2(x,y) cout << (x) << " " << (y) << '\n'
#define print3(x,y,z) cout << (x) << " " << (y) << " " << z << '\n'

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef double ld;

const int N = 16, MOD = 1e9 + 7;

ll a[N][N], n, dp[N][1LL << N];

ll compute(ll row, ll flag) {

	if (row == n) return 0;

	if (dp[row][flag] != -1) return dp[row][flag];

	ll val = 0;

	for (ll i = 0; i < n; ++i) {

		if ((flag & (1LL << i)) == 0) {

			val = max(val, a[row][i] + compute(row + 1, flag | 1LL << i));

		}
	}

	return dp[row][flag] = val;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.precision(10);
	cout << fixed;
#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif

	ll t, cs = 0;

	cin >> t;

	while (t--) {

		++cs;
		memset(dp, -1, sizeof dp);

		cin >> n;

		for (ll i = 0; i < n; ++i) for (ll j = 0; j < n; ++j) cin >> a[i][j];

		Case(cs);

		print1(compute(0, 0));
	}

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}