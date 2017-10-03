#include <bits/stdc++.h>
using namespace std;
const int N = 400;
typedef long long ll;

int mat[N][N], n, m, x, y, p, mx = 0;

bool visited[N][N];

int cost[N][N];

void bfs(pair<ll, ll> source) {

	memset(visited, 0, sizeof(visited));

	memset(cost, 0, sizeof(cost));

	visited[source.first][source.second] = true;

	mat[source.first][source.second] += p;
    
    cost[x][y]=p;

	mx = max(mx,mat[x][y]);

	queue< pair<ll, ll> > q;

	q.push(source);

	

	int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1}, dy[] = {0, 0, -1, 1, -1, 1, -1, 1};


	while (q.size()) {
        
        ll x, y;

		pair<ll, ll> current = q.front();

		q.pop();

		for (int i = 0; i < 8; ++i) {

			x = current.first + dx[i], y = current.second + dy[i];

			pair<ll, ll> next = {x, y};

			if (x>=0 && y>=0 && x<n && y<n && visited[x][y] == 0) {

				if (cost[current.first][current.second] > 1) {

					mat[x][y] += cost[current.first][current.second] - 1;
                    
                    cost[x][y] = cost[current.first][current.second] - 1;

					mx = max(mx,mat[x][y]);

					visited[x][y] = 1;

					q.push(next);

				}


			}


		}

	}

}


	int main() {

		cin >> n >> m;

		while (m--) {

			cin >> x >> y >> p;
			bfs(make_pair(x, y));

		}/*
        
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j) cout<<mat[i][j]<<' ';
            cout<<"\n";
        }*/

		cout << mx << '\n';

		return 0;
	}