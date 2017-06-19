#include <bits/stdc++.h>
using namespace std;
 
const int N=1e+5;
 
bool a[N];
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
	int n,k,open=0,pos;
 
	string q;
 
	cin>>n>>k;
 
	while(k--){
 
		cin>>q;
 
		if(q=="CLICK"){
 
			cin>>pos;
 
			if(a[pos]==1) --open,a[pos]=0;
 
			else ++open,a[pos]=1;
 
		}
 
		else{
 
			memset(a,0,sizeof(a));
 
			open=0;
 
		}
 
		cout<<open<<'\n';
 
	}
 
 
 
} 
