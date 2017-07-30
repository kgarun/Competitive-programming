#include <bits/stdc++.h>
using namespace std;

#define mp(x,y) make_pair(x,y)

int grid[25][25], n, p, q, r, s, ans = INT_MAX;

char mat[1000][1000];

bool visited[25][25];

bool isValid(int x, int y) {

	if (x < 1 || y < 1 || x > n || y > n) return 0;

	return 1;

}


void trav(int x, int y, int val) {

	if (isValid(x, y)) {

		if (x == r && y == s) ans = min(ans, val);

		if (visited[x][y]) return;

		else {

			visited[x][y] = 1;

			int dx = x - 1, dy = y - 1;

			while (dx > 0) {

				if (grid[dx][y] == 1) {

					trav(dx, y, val + 1);

					break;

				}

				--dx;

			}


			while (dy > 0) {

				if (grid[x][dy] == 1) {

					trav(x, dy, val + 1);

					break;
				}

				--dy;

			}

			dx = x + 1, dy = y + 1;

			while (dx <= n) {

				if (grid[dx][y] == 1) {

					trav(dx, y, val + 1);

					break;
				}

				++dx;

			}


			while (dy <= n) {

				if (grid[x][dy] == 1) {

					trav(x, dy, val + 1);

					break;

				}

				++dy;

			}

			visited[x][y] = 0;

		}



	}


}


int main() {

	cin >> n;

	for (int i = 1; i <= n; ++i) {

		for (int k = 0; k < 2 * n - 1; ++k) {

			cin >> mat[i][k];

		}


	}

	for (int i = 1; i <= n; ++i) for (int j = 1, k = 0; k < 2 * n - 1; k += 2, ++j) grid[i][j] = mat[i][k] - '0';

	string x, y;

	cin >> x;

	cin >> y;

	unsigned int t = 0, i = 0;

	while (x[i] != ',') {

		t = t * 10 + (x[i] - '0');
		++i;
	}


	++i;

	p = t;

	t = 0;

	for (; i < x.size(); ++i) t = t * 10 + (x[i] - '0');

	q = t;

	t = 0;

	i = 0;

	while (y[i] != ',') {

		t = t * 10 + (y[i] - '0');
		++i;
	}


	++i;

	r = t;

	t = 0;

	for (; i < y.size(); ++i)t = t * 10 + (y[i] - '0');

	s = t;

	t = 0;

	trav(p, q, 0);

	cout << ans << "\n";

}