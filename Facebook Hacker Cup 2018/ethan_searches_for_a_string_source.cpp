#include <bits/stdc++.h>
#include <ext/rope>
using namespace std;
using namespace __gnu_cxx;

typedef long long ll;

ifstream fin("input.txt");
ofstream fout("output.txt");

ll t, ctr = 0;

string a;

inline bool mat(const string &b) {
	int i = 0, j = 0;
	while (true) {
		if (i >= a.size()) return true;
		if (j >= b.size()) return false;
		if (a[i] == b[j]) ++i, ++j;
		else if (i == 0) ++j;
		else i = 0;
	}
	return false;
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	fin >> t;

	while (t--) {

		string pref;

		bool flag = 0;

		fout << "Case #" << ++ctr << ":";

		fin >> a;

		for (int i = 0; i < a.size(); ++i) {
			pref += a[i];
			if (!mat(pref + a)) {
				fout << ' ' << (pref + a);
				flag = 1;
				break;
			}
		}

		if (!flag) fout << " Impossible";

		if (t != 0)	fout << "\n";

	}

	return 0;
}