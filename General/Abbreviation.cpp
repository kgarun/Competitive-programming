/*
* @Author: kg
* @Date:   2017-11-26 18:27:35
* @Last Modified by:   kg
* @Last Modified time: 2017-11-26 18:55:07
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 2e5 + 5, MOD = 1e9 + 7;

int dp[1000][1000], q, x, y;

string a,b;

bool compute(int i, int j) {

	if (j == y) {

		for (int l = i; l < x; ++l) if (a[l] >= 'A' && a[l] <= 'Z') return false;

		return true;
	}

	if (i == x) {

		for (int l = j; l < y; ++l) return false;

		return true;
	}

	bool result = false;
    
    if(dp[i][j] != -1) return dp[i][j];

	if (a[i] >= 'a' && a[i] <= 'z') {

		result = (result || compute(i + 1, j)); //Skipping

		if ((a[i] == b[j] ) or (toupper(a[i]) == b[j])) result = (result || compute(i + 1, j + 1));

	} else {

		if(a[i]!=b[j]) result = false;

		else result = (result || compute(i+1,j+1));

	}
    
    dp[i][j] = result;

	return result;

}

int main() {
	
	cin >> q;

	while (q--) {

		memset(dp, -1, sizeof(dp));

		cin >> a >> b;

		x = a.size();

		y = b.size();

		cout << ((compute(0, 0))?"YES":"NO")<< '\n';
	}

	return 0;
}