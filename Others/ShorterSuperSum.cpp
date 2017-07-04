#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int SuperSum(int k, int n) {

	if (k < 0) return 0;

	int &ref = dp[k][n];

	if (!ref) {

		if (k == 0) return n;

		else {

			for (int i = n; i > 0; --i) ref += SuperSum(k - 1, i);
		}

	}

	return ref;

}



int main() {

	int k, n;

	memset(dp, 0, sizeof(dp));

	cin >> k >> n;

	cout << SuperSum(k, n) << '\n';









}