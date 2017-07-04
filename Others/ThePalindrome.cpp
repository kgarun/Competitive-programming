#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];

string s;

int compute(int i, int j, int n = s.size()) {

	if (i > j) return 0;

	int &ref = dp[i][j];

	if (ref == -1) {

		if (i == j) ref = 1;

		else if (s[i] == s[j]) ref = 2 + compute(i + 1, j - 1);

		else ref = min(2 + compute(i + 1, j), 2 + compute(i, j - 1));

	}

	return ref;

}

int main() {

	memset(dp, -1, sizeof(dp));

	cin >> s;

	cout << compute(0, s.size() - 1) << '\n';

}