#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 5;

int a[N];

void print(int n) {

	int t = n;

	if (n & 1) {

		while (t >= 1) {

			cout << a[t] << " ";

			t -= 2;

		}

		t = 2;

		while (t <= n) {

			cout << a[t] << " ";

			t += 2;


		}


	}

	else {


		while (t >= 2) {

			cout << a[t] << " ";

			t -= 2;

		}

		t = 1;

		while (t <= n) {

			cout << a[t] << " ";

			t += 2;


		}







	}







}

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i) cin >> a[i];

	print(n);

	cout << "\n";

}