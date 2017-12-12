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
	
	++t;
	
	for(j=0;j<t;++j){
 
		char s[250];
 
		map<char,bool> m;
 
		for(char c='a';c<='z';++c) m[c]=0;
 
		cin.getline(s,sizeof(s));
 
		for(i=0;i<strlen(s);++i) {
 
			if(s[i]!=' '){
 
				m[tolower(s[i])]=1;
 
 
 
 
			}
 
 
		}
 
		bool f=0;
 
		for(char c='a';c<='z';++c) if(m[c]==0) f=1;
		
		if(j>0){
 
			if(f) cout<<"FALSE\n";
 
			else cout<<"TRUE\n";
			
		}
 
 
		
	
	
	
	
	
	}
 
	return 0;
} 
