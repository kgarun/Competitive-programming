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
 
	int i,j,k;
 
	cin>>t;
	
	while(t--){
 
		string s;
 
		cin>>s;
 
		int temp=0,ans=0;
 
		for(i=0;i<s.size();++i){
			temp=0;
				if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u' ){
					temp=1;
 
					for(j=i+1;j<s.size();++j){
 
						if(s[j]=='a' || s[j]=='e' || s[j]=='i'|| s[j]=='o'|| s[j]=='u' ){ ++temp;}
 
						else break;
 
 
 
 
				}	ans=max(temp,ans);
 
 
 
 
		}
	
	
	
	}
 
	cout<<ans<<"\n";
 
 
 
	
 
 
 
 
 
	
		}
 
		return 0;
}
 
