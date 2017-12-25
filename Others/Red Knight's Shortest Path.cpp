#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

map< pair<ll, ll>, vector<string> > cost;

ll X0, Y0, X1, Y1, t;

ll bfs(pair<ll, ll> source, pair<ll, ll> dest) {


	queue< pair<ll, ll> > q;

	q.push(source);

	ll x, y;

	string mv[] = {"UL", "UR", "R", "LR", "LL", "L"};

	int dx[] = { -2, -2, 0, 2, 2, 0}, dy[] = { -1, 1, 2, 1, -1, -2};


	while (q.size()) {

		pair<ll, ll> current = q.front();

		if (current == dest) {

			cout << cost[dest].size() << '\n';

			for (auto s : cost[dest]) {

				cout << s << " ";

			}

			return 1;

		}

		q.pop();

		for (int i = 0; i < 6; ++i) {

			x = current.first + dx[i], y = current.second + dy[i];

			if (x >= t || x < 0 || y >= t || y < 0) continue;

			pair<ll, ll> next = {x, y};

			if (cost[next].size() == 0) {

				cost[next] = cost[current];

				cost[next].emplace_back(mv[i]);

				q.push(next);


			}


		}

	}

	return -1;
}



int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> t;

	cin >> X0 >> Y0  >> X1 >> Y1;

	if (int(abs(X0 - X1)) & 1) cout << "Impossible\n";

	else cout << ( (bfs({X0, Y0}, {X1, Y1}) == -1) ? "Impossible\n" : "\n");

	return 0;
}






