#include <bits/stdc++.h>
using namespace std;

typedef long long long;

map <  long , map<long, long >  > mat;

const long M = 1000000007; // modulo
map<long, long> F;


int main(void) {

	long r, c, t;

	F[1] = F[2] = 1;

	for(long i=3;i<=50;++i) 	F[i]=F[i-1]+F[i-2];

	cin >> r >> c >> t;

	for (long i = 1; i <= r; ++i) for (long j = 1; j <= c; ++j) cin >> mat[i][j];

	for (long i = 1; i <= r; ++i) for (long j = 1; j <= c; ++j) mat[i][j] += mat[i][j - 1];

	for (long j = 1; j <= c; ++j) for (long i = 1; i <= r; ++i) mat[i][j] += mat[i - 1][j];

	while (t--) {

		long i, j, k, l;

		cin >> i >> j >> k >> l;

		++i, ++j, ++k, ++l;

		long val=mat[k][l]-mat[k][j-1]-mat[i-1][l]+mat[i-1][j-1];

		cout << F[(val % 50)] << "\n";

	}


}