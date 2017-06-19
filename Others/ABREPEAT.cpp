 
#include <bits/stdc++.h>
using namespace std;
 
typedef uint64_t ll;
 
 
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
 
	ll n,k,b=0,sub=0,a=0,i,lasta=0;
 
	string s;
 
	cin>>n>>k;
 
	cin>>s;
 
	for(i=0;i<n;++i){
 
		if(s[i]=='b') {
 
			++b;
 
			sub+=a;
		}
 
		else if(s[i]=='a') ++a;
 
	}
 
	//cout<<a<<" "<<b<<" "<<sub<<"\n";
 
	sub*=k;
 
	sub+=a*b*(k*(k-1)/2);	
 
	cout<<sub<<"\n";
 
 
 
}
 
 
}
 
 
 
	 
