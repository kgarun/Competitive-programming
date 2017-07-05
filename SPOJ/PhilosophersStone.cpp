#include <bits/stdc++.h>
using namespace std;

const int N = 105;

long long dp[N][N];

int main() {

	int t;

	cin >> t;

	while (t--) {

		memset(dp, 0, sizeof(dp));

		int h, w;

		cin >> h >> w;

		for (int i = 1; i <= h; ++i)
			for (int j = 1; j <= w; ++j) cin >> dp[i][j];

		for (int i = 1; i <= h; ++i)
			for (int j = 1; j <= w; ++j) dp[i][j] += max(dp[i - 1][j], max(dp[i - 1][j - 1], dp[i - 1][j + 1]));


		long long ans = 0;

		for (int i = 1; i <= w; ++i) ans = max(ans, dp[h][i]);

		cout << ans << '\n';

	}


}