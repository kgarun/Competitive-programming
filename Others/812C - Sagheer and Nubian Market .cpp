#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[100005], n, s, ans = 0;

ll f(ll k) {

	ll b[100005], sum = 0;

	for (ll i = 0; i < n; ++i) b[i] = a[i] + (i + 1LL) * k;

	sort(b, b + n);

	for (ll i = 0; i < k; ++i) sum += b[i];

	return sum;

}

void bsearch(ll l = 0, ll r = n) {

	ll mid, val;

	while (l <= r) {

		mid = (l + r) >> 1;

		val = f(mid);

		if (val > s) r = mid - 1;

		else if (val < s) {
			ans = mid;
			l = mid + 1;
		}

		else {
			ans = mid;
			break;
		}
	}

}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> s;

	for (int i = 0; i < n; ++i) cin >> a[i];

	bsearch();

	cout << ans << " " << f(ans) << '\n';

	return 0;
}
