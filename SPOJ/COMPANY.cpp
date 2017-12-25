#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 2e5 + 5, MOD = 1e9 + 7;

#define rz resize
#define ff first
#define ss second
#define eb emplace_back
#define pb push_back
#define um unordered_map
#define mkp(x,y) make_pair((x),(y))
#define FOR(x,n) for(auto i=(x);i<(n);++i)
#define speedum(x) (x).reserve(1024); (x).max_load_factor(0.25)
#define speedio ios_base::sync_with_stdio(0);cin.tie(0)
#define print1(x) cout << (x) << '\n'
#define print2(x,y) cout << (x) << " " << (y) << '\n'
#define print3(x,y,z) cout << (x) << " " << (y) << " " << z << '\n'
#define debug1(x) cout << "Value is : " << (x) << '\n'
#define debug2(x,y) cout << "Values are : " << (x) << " " << (y) << '\n'
#define debug3(x,y,z) cout << "Values are : " << (x) << " " << (y) << " " << (z) << '\n'
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector< vll > vvll;

ll n, e, x, y, timer = 0, start[N], finish[N], ex = 0;
vvll adjList;
um < ll , um < ll , bool > > invalid;

void dfs(ll node) {

	start[node] = ++timer;

	for (auto child : adjList[node]) {

		if (!start[child]) dfs(child); //Tree Edge

		else {

			if (!finish[child]) { //Back Edge

				invalid[node][child] = 1;
				++ex;

			}
			else if (start[node] < start[child]) { //Forward Edge

				invalid[node][child] = 1;
				++ex;

			}

			else { //Cross Edge

			}
		}

	}

	finish[node] = ++timer;
}

int main() {

	speedio;
	speedum(invalid);

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif

	vector<pll> edgeList;


	cin >> n >> e;

	adjList.rz(n + 1);

	FOR(0, e) {
		cin >> x >> y;
		adjList[x].eb(y);
		edgeList.eb(mkp(x, y));
	}

	dfs(1);

	print1(e - ex);

	for (auto edge : edgeList) {
		if (invalid[edge.ff][edge.ss]) continue;
		print2(edge.ff, edge.ss);
	}

	return 0;
}