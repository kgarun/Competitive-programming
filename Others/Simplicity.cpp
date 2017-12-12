#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll inf = 1e16;

const int N = 1e5+5 , MOD = 1e9+7;





int main(void){

	#ifndef ONLINE_JUDGE

 	freopen ( "/home/arun/CP/input.txt", "r", stdin );

 	#endif

   string s;

   ll cnt = 0;

   unordered_map < char , int >  mp;

   cin >> s;

   for(auto c:s) ++mp[c];

   set < pair<int,char> > st;

	for(auto trav:mp) st.insert({trav.second,trav.first});

	while(st.size()>2){

		pair<int,char> temp = *st.begin();

		cnt += temp.first;

		st.erase(temp);
	}

	cout << cnt <<'\n';

}