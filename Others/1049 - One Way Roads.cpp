/*
* @Author: kg
* @Date:   2017-12-30 16:19:13
* @Last Modified by:   kg
* @Last Modified time: 2017-12-30 16:36:05
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
const int N = 100 + 5, MOD = 1e9 + 7;

vector < vll > adjList;
ll cost[N][N], mincost, child;

void dfs(ll node, ll parent, ll c) {
	if (node == 1) {
		mincost = min(mincost, c);
		return;
	}
	for (ll i = 0; i < adjList[node].size(); ++i) {
		child = adjList[node][i];
		if (child != parent) {
			dfs(child, node, cost[node][child] + c);
		}
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	ll t, cs = 0;

	cin >> t;

	while (t--) {
		++cs;
		mincost = INT_MAX;
		adjList.clear();


		ll n, u, v, w;
		cin >> n;
		adjList.rz(n + 1);

		FOR (0, n) {
			cin >> u >> v >> w;
			adjList[u].pb(v);
			adjList[v].pb(u);
			cost[u][v] = 0;
			cost[v][u] = w;
		}

		dfs(adjList[1][0], 1, cost[1][adjList[1][0]]);
		dfs(adjList[1][1], 1, cost[1][adjList[1][1]]);

		Case(cs);
		print1(mincost);
	}

	return 0;
}