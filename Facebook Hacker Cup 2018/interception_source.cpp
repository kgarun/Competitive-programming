#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5 + 5, MOD = 1e9 + 7;

ifstream fin("input.txt");
ofstream fout("output.txt");

ll t, ctr = 0;

long oper(long x, long y, string op) {
	if (op == "+") return x + y;
	if (op == "*") return x * y;
	if (op == "^") return pow(x, y);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	fin >> t;

	while (t--) {

		int n;

		fin >> n;

		vector<long> a(n + 1);

		for (int i = 0; i <= n; ++i) fin >> a[i];

		reverse(a.begin(), a.end());

		vector<string> expr;

		for (int i = 0; i <= n; ++i) {
			if (!i)
			{
				expr.push_back(to_string(a[i]));
				expr.push_back("*");
				expr.push_back("0");
				expr.push_back("^");
				expr.push_back(to_string(n - i));
			}
			else
			{
				expr.push_back("+");
				expr.push_back(to_string(a[i]));
				expr.push_back("*");
				expr.push_back("0");
				expr.push_back("^");
				expr.push_back(to_string(n - i));
			}

		}

		map<string, int> pre;
		stack<string> s;
		vector<string> postfix;

		pre["^"] = 1;
		pre["*"] = 2;
		pre["+"] = 3;

		for (auto c : expr) {
			if (c == "^" or c == "*" or c == "+")
			{
				while (s.size() and pre[s.top()] > pre[c]) postfix.push_back(s.top()), s.pop();
				s.push(c);
			}
			else {
				postfix.push_back(c);
			}
		}

		while (s.size()) postfix.push_back(s.top()), s.pop();

		vector<long> result;

		for (auto c : postfix) {
			if (c == "^" or c == "*" or c == "+") {
				long x = result.back();
				result.pop_back();
				long y = result.back();
				result.pop_back();
				swap(x, y);
				result.push_back(oper(x, y, c));
			}
			else {
				result.push_back(stol(c));
			}

		}

		fout << "Case #" << ++ctr << ":";

		if (result.front() == 0) {
			fout << " 1" << '\n' << "0.0";
		}
		else fout << " 0";

		if (t != 0)	fout << "\n";
	}

	return 0;
}