#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n, ans = 0;

	string s;

	unordered_map<string, int> cnt;

	cin >> n;

	while (n--) {

		cin >> s;

		sort(s.begin(), s.end());

		ans = max(ans, ++cnt[s]);
	}
	
	cout<<ans<<'\n';



}