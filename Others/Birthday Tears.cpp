
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isValid(string s){

	char c=s[0];

	for(int i=1;i<s.size();++i) if(c!=s[i]) return 0;

	return 1;

}

int check(string s,int cuts){

	if(isValid(s)) return cuts;

	else if(s.size()&1) return INT_MAX;

	else{

		int l=0,r=s.size(),m;

		m=(l+r)>>1;

		int val1=check(s.substr(0,m),cuts+1);

		int val2=check(s.substr(m,m),cuts+1);

		return min(val1,val2);

	}

}





int main(){

ios_base::sync_with_stdio(0);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t;

cin>>t;

while(t--){

	string s;

	cin>>s;

	ll flag=check(s,0);

	if(flag>=INT_MAX) cout<<-1<<"\n";

	else cout<<flag<<"\n";

}

}



	