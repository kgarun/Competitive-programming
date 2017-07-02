#include <bits/stdc++.h>
using namespace std;

int compute(string &s, int len) {

	if (len & 1) return compute(s, len - 1);

	else {

		int mid = len >> 1;

		string a, b;

		for (int i = 0; i < mid; ++i) a += s[i];

		for (int i = mid; i < len; ++i) b += s[i];

		if (a == b) return len;

		else return compute(s, len - 1);
	}

}




int main() {

	string s;

	cin >> s;

	cout << compute(s, s.size() - 1) << '\n';

}