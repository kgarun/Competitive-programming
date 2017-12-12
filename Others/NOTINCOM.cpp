/*
ID:kgarun51
PROG:
LANG:c++
*/
 
#include<bits/stdc++.h>
using namespace std;
 
ifstream f("input.txt");
ofstream g("output.txt");
 
#define ll long long int
#define llu uint64_t
 
ll n,t;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	ll i,j,k,a,b;
 
	cin>>t;
	
	while(t--){
 
		cin>>a>>b;
 
		ll ans=0;
 
		unordered_map<ll,ll> m;
 
		for(i=0;i<a;++i){
 
			cin>>k;
 
			m[k]++;
 
 
 
		}
 
		for(j=0;j<b;++j){
 
			cin>>k;
 
			if(m[k]>0) {m[k]--;++ans;}
 
 
 
 
 
 
		}
 
		cout<<ans<<"\n";
		
	
	
	
	
	
	}
 
 
 
	
 
 
 
 
 
	return 0;
} 
