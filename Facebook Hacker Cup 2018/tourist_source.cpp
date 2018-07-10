#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ifstream fin("1.txt");
ofstream fout("tourist_output.txt");

ll t, ctr = 0;

int main() {

	fin >> t;

	while (t--) {

		ll n, k, v;

		fin >> n >> k >> v;

		string a[n];

		for (int i = 0; i < n; ++i) fin >> a[i];

		ll pos = ((v - 1LL) * k ) % n;

		set<pair<int, string>> ans;

		while (k > 0) {

			ans.insert({pos, a[pos]});
			pos++;
			if (pos >= n) pos = 0;
			--k;
		}

		fout << "Case #" << ++ctr << ":";

		for (auto a : ans) { 
			fout << " " <<a.second;
		}

		if(t!=0)	fout << "\n";
	}

	return 0;
}