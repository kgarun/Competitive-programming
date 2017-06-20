#include<bits/stdc++.h>
using namespace std;
 
 
int main(){	
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
 
	uint64_t t;
 
	cin>>t;
 
	while(t--){
 
		uint64_t n,i,tp,ans=0,j,s1=0,s2=0;
 
		set<uint64_t> s;
 
		unordered_map<uint64_t,uint64_t> a,b;
 
		cin>>n;
 
		for(i=0;i<n;++i){
 
			cin>>tp;
 
			a[i]=tp;
 
		}
 
 
		for(i=0;i<n;++i){
 
			cin>>tp;
 
			b[i]=tp;
 
		}
 
		for(i=0;i<n;++i){
 
			if(i%2==0){
 
				s1+=a[i];
 
				s2+=b[i];
 
			}
 
			else{
 
				s1+=b[i];
 
				s2+=a[i];
 
			}
 
			//cout<<s1<<" "<<s2<<"\n";
 
 
		}
 
		
		cout<<min(s1,s2)<<"\n";		
 
 
	}	
	
 
return 0;
 
 
 
} 
