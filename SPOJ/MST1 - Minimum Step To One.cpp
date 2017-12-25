/*
* @Author: kg
* @Date:   2017-12-25 12:36:49
* @Last Modified by:   kg
* @Last Modified time: 2017-12-25 13:05:46
*/
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
#define mem(x,v) memset(x,v,sizeof(x))
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

ll dp[N], inf = 1e9;

int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	ll t, cnt = 0;


	dp[0] = inf;
	dp[1] = 0;

	FOR(2,N) {
		dp[i] = inf;
		dp[i] = min(dp[i], 1 + dp[i - 1]);
		if (i % 2 == 0) dp[i] = min(dp[i], 1 + dp[i / 2]);
		if (i % 3 == 0) dp[i] = min(dp[i], 1 + dp[i / 3]);
	}

	cin >> t;

	while (t--) {

		++cnt;

		ll n;

		cin >> n;

		Case(cnt);

		print1(dp[n]);

	}

	return 0;
}