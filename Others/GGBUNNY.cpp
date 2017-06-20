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
 
ll n,t,m;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	llu i,j,k;
cin>>t;
 
while(t--){
	m=0;
 
	cin>>n>>k;
 
	multiset<llu> a,b;
 
	for(i=0;i<n;++i) {
 
		cin>>j;
 
		a.insert(j);
 
		m=(m<j)?j:m;
 
	}
 
	llu temp=k;
 
	while(1){
 
		
 
		b.insert(temp);
 
		temp*=k;
 
		if(temp>m) break;
 
 
 
	}
 
	llu c=0;
 
	for(auto ptr:a){
 
		if(ptr==1) ++c;
 
		else if(b.find(ptr)!=b.end()) ++c;
 
 
 
	}
 
	cout<<c<<"\n";
 
 
 
 
 
 
 
 
 
 
	
 
 
 
 
 
}
 
 
	
 
 
 
 
 
	return 0;
} 
