/*
ID:kgarun51
PROG:
LANG:c++
*/
 
#include<bits/stdc++.h>
using namespace std;
 
ofstream f("data.in");
ifstream g("data.out");
 
#define ll long long int
#define llu uint64_t
 
ll n,t;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	int i,j,k;
 
	cin>>t;
	
	while(t--){
 
		string s;
 
		cin>>s;
 
		n=0;
 
		for(i=4;s[i]!='.';++i) if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') ++n;
 
			cout<<n+4<<"/"<<s.size()<<"\n";
	
	
	
	
	
	}
 
 
 
	
 
 
 
 
 
	return 0;
} 
