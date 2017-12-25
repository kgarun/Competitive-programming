#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6 + 100;

unordered_map<ll, ll> dp, vis;
unordered_map<ll, vector<ll> >  fact;
vector<ll> a(200), primes;
ll np[N + 5];


void sieve() {
	np[0] = np[1] = 1;
	for (ll i = 2; i <= N; ++i) {
		if (!np[i]) {
			primes.emplace_back(i);
			for (ll j = i * i; j <= N; j += i) np[j] = 1;
		}
	}
}

ll compute(ll val) {

	if (val == 0) return 0;

	if (dp[val]) return dp[val];

	if (binary_search(primes.begin(), primes.end(), val)) return dp[val] = val + 1;

	ll m = val + 1, lim = sqrt(val), p, f1, f2, temp;

	set<ll> fact;

	for (ll i = 0; primes[i] <= lim ; ++i) {

		temp = val;

		p = primes[i];

		while (temp % p == 0) {

			f1 = (val / p);

			if (f1 >= val or p >= val) break;

			m = max(m, 1 + f1 * compute(p));
			m = max(m, 1 + p * compute(f1));

			fact.insert(p);
			fact.insert(f1);

			set<ll> temp;

			for (auto vv : fact) {
				f2 = vv * p;
				if (f2 >= val or !f2) break;
				if (val % f2 == 0) {
					temp.insert(f2);
					m = max(m, 1 + (val / f2) * compute(f2));
				}
			}

			fact.insert(temp.begin(), temp.end());

			p *= primes[i];

		}

	}

	return dp[val] = m;

}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	sieve();

	dp[1] = 1;

	ll n, ans = 0;

	cin >> n;

	for (ll i = 0; i < n; i++) cin >> a[i];

	for (ll i = 0; i < n; ++i) {

		ans += compute(a[i]);
	}

	cout << ans << '\n';

	return 0;
}
