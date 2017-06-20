#include<bits/stdc++.h>
using namespace std;
 
 
int main(){	
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
 
	uint64_t t;
 
	cin>>t;
 
	while(t--){
 
		uint64_t n,i,tp,ans=0;
 
		set<uint64_t> s;
 
		unordered_map<uint64_t,bool> m;
 
 
 
		cin>>n;
 
		for(i=0;i<n;++i){
 
			cin>>tp;
 
			if(m[tp]==1) ans=tp;
 
			m[tp]=1;
 
			s.insert(tp);
 
		}
 
		if(ans==0){
 
		for(auto v:s){
 
			if(s.find(v-1)==s.end() && s.find(v+1)==s.end()) {ans=v; break;}
 
		}
 
		}
 
		cout<<ans<<"\n";
 
			
		
 
 
	}	
	
 
return 0;
 
 
 
} 
