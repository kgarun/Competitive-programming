
#include <bits/stdc++.h>
using namespace std;

#define rz resize
#define ff first
#define ss second
#define eb emplace_back
#define pb push_back
#define um unordered_map
#define mkp(x,y) make_pair((x),(y))
#define FOR(x,n) for(ll i=(x);i<(n);++i)
#define Case(x) cout << "Case " << (x) << ": "
#define speedum(x) (x).reserve(1024); (x).max_load_factor(0.25)
#define speedio ios_base::sync_with_stdio(0);cin.tie(0)
#define print1(x) cout << (x) << '\n'
#define print2(x,y) cout << (x) << " " << (y) << '\n'
#define print3(x,y,z) cout << (x) << " " << (y) << " " << z << '\n'
#define debug1(x) cout << "Value is : " << (x) << '\n'
#define debug2(x,y) cout << "Values are : " << (x) << " " << (y) << '\n'
#define debug3(x,y,z) cout << "Values are : " << (x) << " " << (y) << " " << (z) << '\n'
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector< vll > vvll;
const int N = 200 + 5, MOD = 1e9 + 7;

ll grid[N][N], t, n, ans, col;


int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	cin >> t ;

	ll cs = 0;

	while (t--) {

		++cs;

		for (ll i = 0; i < N; ++i)	for (ll j = 0; j < N; ++j) grid[i][j] = 0;

		ans = 0;

		cin >> n;

		col = n - 1;

		for (ll i = 1; i <= n; ++i) {
			for (ll j = 1; j <= i; ++j) cin >> grid[i][j];
		}

		for (ll i = n + 1; i < 2 * n; ++i, --col) {
			for (ll j = 1; j <= col; ++j) cin >> grid[i][j];
		}

		for (ll i = 2; i <= n; ++i) {
			for (ll j = 1; j <= i; ++j) {
				grid[i][j] += max(grid[i - 1][j], grid[i - 1][j - 1]);
			}
		}

		col = n - 1;

		for (ll i = n + 1; i < 2 * n; ++i, --col) {
			for (ll j = 1; j <= col; ++j) {
				grid[i][j] += max(grid[i - 1][j], grid[i - 1][j + 1]);
			}
		}

		Case(cs);
		print1(grid[2 * n - 1][1]);
	}

	return 0;
}