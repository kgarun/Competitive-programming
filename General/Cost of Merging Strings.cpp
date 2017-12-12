/*
* @Author: kg
* @Date:   2017-11-25 23:40:03
* @Last Modified by:   kg
* @Last Modified time: 2017-11-26 12:28:13
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 2e5 + 5, MOD = 1e9 + 7;

ll dp[351][351][351], ilen, jlen, klen;

string a, b;

ll f(int c) {
	return (c - 97);
}

ll compute(int i, int j, int k) {

	if (k == klen) return 0;

	if (i >= ilen or j >= jlen) return INT_MAX;

	if(dp[i][j][k] != -1) return dp[i][j][k];

	ll val = INT_MAX;

		val = min(val, compute(i+1 , j , k));

		val = min(val, compute(i , j + 1, k));

		val = min(val, (f(a[i]) ^ f(b[j])) + compute(i + 1, j + 1, k+ 1));
	


	return dp[i][j][k] = val;
}

int main() {

	cin >> ilen >> jlen >> klen;

	cin >> a >> b;
    
    for(int i=0;i<351;++i) for(int j=0;j<351;++j) for(int k=0;k<351;++k) dp[i][j][k] = -1;

	ll ans = compute(0, 0, 0);

	cout << ((ans < INT_MAX) ? ans : -1 ) << '\n';
    
    

	return 0;
}