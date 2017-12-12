
/*
ID: kgarun51
PROG:
LANG: C++11
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5 + 5, MOD = 1e9 + 7;

char wind;

unordered_map< char, pair<int, int> > move1, move2, move3, move4;

int track[100][100], id = 1;

ll n, x, y, dx, dy;

bool isvalid(int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= n || track[x][y] != 0) return 0;
	return 1;
}



int main(void) {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);


	move1['n'] = make_pair(-1, 0);
	move1['s'] = make_pair(1, 0);
	move1['e'] = make_pair(0, 1);
	move1['w'] = make_pair(0, -1);

	move4['n'] = make_pair(1, 0);
	move4['s'] = make_pair(-1, 0);
	move4['e'] = make_pair(0, -1);
	move4['w'] = make_pair(0, 1);

	move2['n'] = make_pair(0, 1);
	move2['s'] = make_pair(0, 1);
	move2['e'] = make_pair(1, 0);
	move2['w'] = make_pair(1, 0);

	move3['n'] = make_pair(0, -1);
	move3['s'] = make_pair(0, -1);
	move3['e'] = make_pair(-1, 0);
	move3['w'] = make_pair(-1, 0);


	cin >> n;

	cin >> wind;

	cin >> x >> y;

	track[x][y] = id++;

	while (1) {

		bool flag = false;

		pair<int, int> next_move;

		next_move = move1[wind];

		dx = next_move.first, dy = next_move.second;

		if (isvalid(x + dx, y + dy)) {

			x += dx;

			y += dy;

			track[x][y] = id++;

			flag = 1;

		}

		else {

			next_move = move2[wind];

			dx = next_move.first, dy = next_move.second;

			if (isvalid(x + dx, y + dy)) {

				x += dx;

				y += dy;

				track[x][y] = id++;

				flag = 1;

			}

			else {

				next_move = move3[wind];

				dx = next_move.first, dy = next_move.second;

				if (isvalid(x + dx, y + dy)) {

					x += dx;

					y += dy;

					track[x][y] = id++;

					flag = 1;

				}

				else {

					next_move = move4[wind];

					dx = next_move.first, dy = next_move.second;

					if (isvalid(x + dx, y + dy)) {

						x += dx;

						y += dy;

						track[x][y] = id++;

						flag = 1;

					}

				}


			}

		}

		if (!flag) break;


	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cout << track[i][j] << " ";
		cout << "\n";
	}

	return 0;
}