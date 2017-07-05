#include <bits/stdc++.h>
using namespace std;

const int N = 105, OO = 1e7;

int dp[N], a[N];

int compute(int k) {

	dp[0] = 0;

	for (int i = 1; i <= k; ++i) {

		if (a[i] == -1) continue;

		else {

			for (int j = i; j <= k; ++j) {

				dp[j] = min(dp[j], dp[j - i] + a[i]);

			}

		}

	}

	return dp[k];
}



int main() {

	int t;

	cin >> t;

	while (t--) {

		fill(dp, dp + N, OO);

		int n, k;

		cin >> n >> k;

		for (int i = 1; i <= k; ++i) cin >> a[i];

		compute(k);

		cout << ((dp[k] < OO) ? dp[k] : -1) << '\n';

	}

}