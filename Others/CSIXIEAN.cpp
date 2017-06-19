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
 
		s+='a';
 
		int temp=0;
 
		n=0;
 
		for(i=0;i<s.size();++i){
 
			if(s[i]>='0' && s[i] <= '9'){
 
				temp=temp*10+s[i]-48;
 
 
			}
 
			else{
 
				n+=temp;
 
				temp=0;
 
 
 
 
			}
 
 
 
 
 
 
 
		}
 
		cout<<n<<"\n";
		
	
	
	
	
	
	}
 
 
 
	
 
 
 
 
 
	return 0;
} 
