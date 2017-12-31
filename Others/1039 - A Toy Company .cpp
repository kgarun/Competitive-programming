/*
* @Author: kg
* @Date:   2017-12-28 17:59:23
* @Last Modified by:   kg
* @Last Modified time: 2017-12-30 10:30:07
*/
#include <bits/stdc++.h>
using namespace std;

#define rz resize
#define ff first
#define ss second
#define eb emplace_back
#define pb push_back
#define um map
#define mkp(x,y) make_pair((x),(y))
#define FOR(x,n) for(ll i=(x);i<(n);++i)
#define Case(x) cout << "Case " << (x) << ": "
#define speedum(x) (x).reserve(1024); (x).max_load_factor(0.25)
#define speedio ios_base::sync_with_stdio(0);cin.tie(0)
#define print1(x) cout << (x) << '\n'
#define print2(x,y) cout << (x) << " " << (y) << '\n'
#define print3(x,y,z) cout << (x) << " " << (y) << " " << z << '\n'
#define debug1(x) cout << "Value is : " << (x) << '\n'
#define debug2(x,y) cout << "Values are : " << (x) << " " << (y) << '\n'
#define debug3(x,y,z) cout << "Values are : " << (x) << " " << (y) << " " << (z) << '\n'
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector< vll > vvll;
const int N = 2e7 + 5, MOD = 1e9 + 7;

ll n, steps;

map <string, bool> avoid;

map <string, ll > dist;

char p, q, r, x, y, z;

char nex(int a) {

	if (a == 'z') return 'a';
	return a + 1;
}

char prev(int a) {

	if (a == 'a') return 'z';
	return a - 1;
}

ll bfs(string src, string des) {

	queue < string > q;

	if (!avoid[src]) q.push(src);

	avoid[src] = 1;

	dist[src] = 0;

	while (q.size()) {

		string current = q.front();

		q.pop();

		if (current == des) return dist[current];

		for (ll i = 0; i < 3; ++i) {
			string temp = current;
			temp[i] = nex(current[i]);

			if (!avoid[temp]) {
				dist[temp] = dist[current] + 1;
				avoid[temp] = 1;
				q.push(temp);
			}

			temp = current;
			temp[i] = prev(current[i]);

			if (!avoid[temp]) {
				dist[temp] = dist[current] + 1;
				avoid[temp] = 1;
				q.push(temp);
			}
		}

	}

	return -1;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;

	ll t, cs = 0;

	string a, b, c;

	cin >> t;

	while (t--) {
		++cs;

		avoid.clear();
		dist.clear();

		string src, des, x, y, z;

		cin >> src >> des;

		cin >> n;

		FOR(0, n) {

			cin >> x >> y >> z;

			for (ll i = 0; i < x.size(); ++i)
				for (ll j = 0; j < y.size(); ++j)
					for (ll k = 0; k < z.size(); ++k) {
						string temp;
						temp += x[i];
						temp += y[j];
						temp += z[k];
						avoid[temp] = 1;
					}
		}

		Case(cs);
		print1(bfs(src, des));
	}

	return 0;
}