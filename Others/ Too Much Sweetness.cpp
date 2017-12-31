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
const int N = 2e7 + 5, MOD = 1e9 + 7;

ll p, q, n, b1, b2, s1, s2;

ll dp[55][55][55][55][3];

ll compute(ll x, ll y, ll b1, ll b2, ll last) {

	if (x + y == n) {

		return 1;
	}

	if (x + y > n) return 0;

	if (dp[x][y][b1][b2][last] != -1) return dp[x][y][b1][b2][last];

	ll cnt = 0;

	if (b1 > 0 && last != 0) {

		for (ll i = 1; i <= min(s1, p - x); ++i) {

			cnt += compute(x + i, y, b1 - 1, b2, 0);
		}
	}

	if (b2 > 0 && last != 1) {

		for (ll i = 1; i <= min(s2, q - y); ++i) {

			cnt += compute(x, y + i, b1, b2 - 1, 1);
		}
	}

	return dp[x][y][b1][b2][last] = (cnt % MOD);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	ll t;

	cin >> t;

	while (t--) {

		memset(dp, -1, sizeof dp);

		cin >> p >> q >> n >> b1 >> b2 >> s1 >> s2;

		s1 = min(s1, p);
		s2 = min(s2, q);

		cout << compute(0, 0, b1, b2, 2) << '\n';
	}

#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}