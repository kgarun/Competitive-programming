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
 
		map<char,bool> m;
 
		//memset(m,sizeof(m),0);
 
 
 
		int cnt=0;
 
		string s;
 
		cin>>s;
 
		for(i=0;i<s.size();++i){
 
			s[i]=tolower(s[i]);
 
			if(m[s[i]]==0) {
 
				m[s[i]]=1;
 
 
 
			}
 
			else ++cnt;
 
			
 
 
 
 
		}
 
		cout<<cnt<<"\n";
 
		
	
	
	
	
	
	}
 
 
 
	
 
 
 
 
 
	return 0;
} 
