#include <bits/stdc++.h>
using namespace std;

#define rz resize
#define ff first
#define ss second
#define eb emplace_back
#define pb push_back
#define um unordered_map
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

um<string, bool> valid;

bool won(string b) {

	return (
	           (b[0] != '.' && b[0] == b[1] && b[1] == b[2]) ||
	           (b[3] != '.' && b[3] == b[4] && b[4] == b[5]) ||
	           (b[6] != '.' && b[6] == b[7] && b[7] == b[8]) ||
	           (b[0] != '.' && b[0] == b[3] && b[3] == b[6]) ||
	           (b[1] != '.' && b[1] == b[4] && b[4] == b[7]) ||
	           (b[2] != '.' && b[2] == b[5] && b[5] == b[8]) ||
	           (b[0] != '.' && b[0] == b[4] && b[4] == b[8]) ||
	           (b[2] != '.' && b[2] == b[4] && b[4] == b[6])
	       );

}

char nextp(char x) { return (x == 'X') ? 'O' : 'X';}

void simulate(string b, char p) {

	//valid[b] = true;

	bool flag = 0;

	FOR(0, 9) {
		if (b[i] == '.') {

			flag = 1;

			string temp = b;

			temp[i] = p;

			if (!won(temp)) {

				simulate(temp, nextp(p));

			}

			else valid[temp] = true;
		}

	}

	if (!flag) valid[b] = true;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/kg/Desktop/Cp/input.txt", "r", stdin);
	freopen("/home/kg/Desktop/Cp/output.txt", "w", stdout);
#endif
	speedio;
	speedum(valid);

	simulate(".........", 'X');

	string conf;

	while (cin >> conf) {

		if (conf == "end") break;

		print1(((valid[conf]) ? ("valid") : ("invalid")));

	}

	return 0;
}