#include <bits/stdc++.h>
using namespace std;

int compute(vector<int> &a) {

	if (a.size() == 1) return a[0];

	else {

		vector<int> b;

		for (int i = 0; i + 1 < a.size(); i += 2) b.push_back(a[i] ^ a[i + 1]);

		return compute(b);
	}





}

int main() {

	int t;

	cin >> t;

	while (t--) {

		int n;

		cin >> n;

		vector<int> a((int)pow(2, ceil(log(n) / log(2))), 0);

		for (int i = 0; i < n; ++i) cin >> a[i];

		cout << compute(a) << '\n';

	}


}