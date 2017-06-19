#include<bits/stdc++.h>
using namespace std;
 
map<uint64_t,uint64_t> m;
 
uint64_t compute(uint64_t n){
 
	if(m[n]!=0) return m[n];
 
	if(n==0 || n==1) {m[n]=n;return n;}
 
	else{
 
		m[n/2]=max(n/2,compute(n/2));
 
		m[n/3]=max(n/3,compute(n/3));
 
		m[n/4]=max(n/4,compute(n/4));
 
		m[n]=max(n,m[n/2]+m[n/3]+m[n/4]);
	} 
 
	return m[n];
 
 
}
 
 
int main(){
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
 
	uint64_t i;
 
	while(cin>>i){
 
 
		cout<<compute(i)<<"\n";
 
	}
 
	return 0;
 
}
 
