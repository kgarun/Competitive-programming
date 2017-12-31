/*
* @Author: kg
* @Date:   2017-12-27 18:41:55
* @Last Modified by:   kg
* @Last Modified time: 2017-12-27 18:53:56
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
const int N = 25, MOD = 1e9 + 7;

char grid[N][N];
bool visited[N][N];
ll t, n, m, p, q, r, s, cnt;

void dfs(ll x, ll y) {
	if (x < 0 || y < 0 || x >= n || y >= m || visited[x][y] || grid[x][y] == '#') return;
	++cnt;
	visited[x][y] = 1;
	dfs(x, y - 1);
	dfs(x - 1, y);
	dfs(x, y + 1);
	dfs(x + 1, y);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	cin >> t;

	ll cc = 0;

	while (t--) {
		for (ll i = 0; i < N; ++i) for (ll j = 0; j < N; ++j) visited[i][j] = 0;
		cnt = 0;
		++cc;
		cin >> m >> n;
		for (ll i = 0; i < n; ++i) {
			for (ll j = 0; j < m; ++j) {
				cin >> grid[i][j];
				if (grid[i][j] == '@') p = i, q = j;
			}
		}
		dfs(p, q);
		Case(cc);
		print1(cnt);
	}

	return 0;
}