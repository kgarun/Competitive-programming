/*
* @Author: kg
* @Date:   2017-12-30 11:03:41
* @Last Modified by:   kg
* @Last Modified time: 2017-12-30 14:34:20
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
ll dx[] = {1, 1, 2, 2, -1, -1, -2, -2} , dy[] = {2, -2, 1, -1, 2, -2, 1, -1};
ll n, m , k;

char grid[20][20];

ll cost[20][20] , dist[20][20], board[20][20], knights;

bool visited[20][20];

void bfs(ll x, ll y) {

	memset(visited, 0, sizeof visited);

	queue < pair<ll, ll> > q;

	q.push(mkp(x, y));

	visited[x][y] = 1;
	++board[x][y];
	dist[x][y] = 0;

	while (q.size()) {

		x = q.front().first;
		y = q.front().second;

		q.pop();

		for (ll i = 0; i < 8; ++i) {
			ll xx = x + dx[i] , yy = y + dy[i];
			if (xx < 0  || yy < 0 || xx >= n || yy >= m || visited[xx][yy]) continue;
			visited[xx][yy] = 1;
			++board[xx][yy];
			dist[xx][yy] = dist[x][y] + 1;
			q.push(mkp(xx, yy));
		}
	}

	for (ll i = 0; i < n; ++i) {
		for (ll j = 0; j < m; ++j) {
			cost[i][j] += (dist[i][j] + k - 1) / k;
		}
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	ll t, CASE = 0;

	cin >> t;

	while (t--) {
		++CASE;
		knights = 0;
		memset(cost, 0, sizeof cost);
		memset(board, 0, sizeof board);

		cin >> n >> m;

		ll moves = INT_MAX;

		for (ll i = 0; i < n; ++i)
			for (ll j = 0; j < m; ++j) {
				cin >> grid[i][j];
			}

		for (ll i = 0; i < n; ++i)
			for (ll j = 0; j < m; ++j) {
				if (grid[i][j] >= '1' && grid[i][j] <= '9') {
					++knights;
					k = grid[i][j] - '0';
					bfs(i, j);
				}
			}

		for (ll i = 0; i < n; ++i)
			for (ll j = 0; j < m; ++j) {
				if (board[i][j] == knights) moves = min(moves, cost[i][j]);
			}

		Case(CASE);
		print1((moves == INT_MAX) ? -1 : moves);
	}

	return 0;
}