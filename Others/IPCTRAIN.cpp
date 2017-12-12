#include <bits/stdc++.h>
using namespace std;

struct node {

	long long day, course;

	long long level;

};


unordered_map<long long , vector<node> > mp;

unordered_map<long long, long long> cnt;


int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long t;

	cin >> t;

	while (t--) {

		mp.clear();

		cnt.clear();

		long long n, d, maxd = 0;

		cin >> n >> d;

		maxd = d;

		node a[n];

		for (long long i = 0; i < n; ++i) {

			cin >> a[i].day >> a[i].course >> a[i].level;

			mp[a[i].day].push_back(a[i]);

			maxd = max(maxd, a[i].day);


		}


		set<long long> avl;

		for (long long i = 1; i <= maxd; ++i) {

		//cout << " Day " << i << ".....\n";

			for (auto ptr : mp[i]) {

		//		cout << ptr.course << " " << ptr.level << "\n";

				cnt[ptr.level] += ptr.course;

				avl.insert(ptr.level);

			}

			//cout<<"avlsize:"<<avl.size()<<"\n";

			if (i <= d) {

				if (avl.size() == 0) continue;

				auto temp = avl.end();

				--temp;

				if (cnt[*temp] > 0) cnt[*temp] -= 1;

				if(cnt[*temp] < 1) avl.erase(temp);

			}


		}

		long long ans = 0;

		for (auto ptr : cnt) {

			if (ptr.second > 0) ans += (ptr.first * ptr.second);

		}

		cout << ans << '\n';



	}





}