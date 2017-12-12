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
 
		map<string,bool> a;
 
		string t;
 
		cin>>n;
 
		for(i=0;i<n;++i){
 
			cin>>t;
 
			a[t]=1;
 
 
 
 
 
		}
		cout<<a.size()<<endl;
 
		for(auto ptr:a){
 
			cout<<ptr.first<<endl;
 
 
		}
 
 
 
 
 
 
	}
 
 
 
	
 
 
 
 
 
	return 0;
} 
