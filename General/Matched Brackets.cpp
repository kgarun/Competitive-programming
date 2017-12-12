#include <bits/stdc++.h>
using namespace std;


int main(void) {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, max_nesting_depth = 0, max_nesting_depth_pos, max_symbols = 0, max_symbols_pos;

	stack<int> s;

	cin >> n;

	int a[n];

	for (int i = 0; i < n; ++i) cin >> a[i];

	for (int i = 0; i < n; ++i) {

		if (a[i] == 1) {

			int symbols = 1;

			s.push(1);

			if (s.size() > max_nesting_depth) max_nesting_depth = s.size(), max_nesting_depth_pos = i;

			for (int j = i + 1; j < n; ++j) {

				++symbols;

				if (a[j] == 2) {

					s.pop();

					if (!s.size()) {

						if (symbols > max_symbols) max_symbols = symbols, max_symbols_pos = i;

						i = j;

						break;
					}

				} else {

					s.push(1);

					if ((int)s.size() > max_nesting_depth) max_nesting_depth = (int)s.size(), max_nesting_depth_pos = j;
				}

			}

		}

	}


	cout << max_nesting_depth << " " << max_nesting_depth_pos + 1 << " " << max_symbols << " " << max_symbols_pos + 1 << "\n";

	return 0;
}
