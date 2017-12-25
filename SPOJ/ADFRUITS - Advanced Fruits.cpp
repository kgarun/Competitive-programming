/*
* @Author: kg
* @Date:   2017-12-25 16:59:47
* @Last Modified by:   kg
* @Last Modified time: 2017-12-25 17:19:45
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

string a, b, result;
um<ll, um<ll, string> > dp;
ll x, y;

string compute(ll i, ll j) {

	if (i == x) return b.substr(j);

	if (j == y) return a.substr(i);

	if (dp[i][j].size()) return dp[i][j];

	if (a[i] == b[j]) {

		string m1 = a[i] + compute(i + 1, j + 1);

		return dp[i][j] = m1;

	}

	string m2 = a[i] + compute(i + 1, j), m3 = b[j] + compute(i, j + 1);

	if (m2.size() > m3.size()) return m3;

	return dp[i][j] = m2;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;


	while (cin >> a >> b) {

		x = a.size(), y = b.size();

		dp.clear();
		speedum(dp);

		print1(compute(0, 0));
	}

	return 0;
}