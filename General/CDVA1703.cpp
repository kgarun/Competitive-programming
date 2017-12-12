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
 
llu n,t;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	llu i,j,k;
 
	cin>>t;
	
	while(t--){
 
		cin>>n>>k;
 
		if(n%k==0){
 
			cout<<k<<"\n";
 
 
 
		}
 
		else cout<<n%k<<"\n";
		
	
	
	
	
	
	}
 
 
 
	
 
 
 
 
 
	return 0;
} 
