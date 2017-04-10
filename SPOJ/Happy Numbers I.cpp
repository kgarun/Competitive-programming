#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_map<ll,bool> visited;


int main(){

	ll n,t,s,r,cnt=0;

	cin>>n;

	while(1){

		t=n;

		s=0;

		++cnt;

		while(t){

			r=t%10;

			s+=r*r;

			t/=10;

		}

		n=s;

		//cout<<s<<"\n";

		if(s==1 || visited[s]==1) break;

		visited[s]=1;


	}


	if(s==1)cout<<cnt;
	else cout<<-1;

}
