/*
* @Author: kg
* @Date:   2017 - 12 - 27 17: 54: 18
* @Last Modified by:   kg
* @Last Modified time: 2017-12-27 18:35:54
*/
#include <bits/stdc++.h>
using namespace std;

#define rz resize
#define ff first
#define ss second
#define clr clear
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
const int N = 20000 + 5, MOD = 1e9 + 7;

vector < vll > adjList;
set <ll> nodes;
vll visited;
ll t, n, e, u, v, z , o;

void dfs(ll node, ll cat) {
	visited[node] = cat;
	(cat) ? (++o) : (++z);
	for (ll i = 0; i < adjList[node].size(); ++i) {
		ll child = adjList[node][i];
		if (visited[child] == -1) {
			dfs(child, !cat);
		}
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	cin >> t;

	while (t--) {

		++n;
		z = o = 0;
		adjList.clr();
		visited.clr();
		nodes.clr();

		adjList.rz(N);
		visited.rz(N, -1);

		cin >> e;

		for (ll i = 0; i < e; ++i) {
			cin >> u >> v;
			adjList[u].pb(v);
			adjList[v].pb(u);
			nodes.insert(u);
			nodes.insert(v);
		}

		e = 0;

		for (set<ll>::iterator i = nodes.begin(); i != nodes.end(); ++i) {

			ll node = *i;

			if (visited[node] == -1) {
				z = o = 0;
				dfs(node, 1);
				e += max(z, o);
			}
		}

		Case(n);
		print1(e);
	}

	return 0;
}