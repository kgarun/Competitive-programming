#include <bits/stdc++.h>
using namespace std;

map<char, int> val;

bool prime[100005];

void sieve() {

	prime[0] = prime[1] = 1;

	int e = sqrt(100005) + 1;

	for (int i = 2; i <= e; ++i) if (!prime[i]) {
			for (int j = i * i; j < 100002; j += i) prime[j] = 1;
		}
}

int main(void) {

	for (char c = '1', i = 1; i <= 9; ++i, ++c) val[c] = i;

	for (char c = 'A', i = 10; i <= 36; ++i, ++c) val[c] = i;

	sieve();

	int t,v;

	cin >> t;

	while (t--) {

		string s;

		cin >> s;

		bool flag=0;

		for (int i = max(val[s[0]], val[s[1]]) + 1; i < 37; ++i) {

			//cout<<(<<"\n";

			v=val[s[0]]*i+val[s[1]];

			if(!prime[v])flag=1, cout<<i<<" ";


		}

		if(!flag) cout<<"NONE";






	}


}