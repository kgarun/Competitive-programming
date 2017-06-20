 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int a[100005];
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
int t,i;
 
cin>>t;
 
while(t--){
 
	int n,pre=0,ans;
 
	cin>>n;
 
	for(i=0;i<n;++i) cin>>a[i];
 
	for(i=0;i<n;++i){
 
		if(a[i]>pre) pre+=(a[i]-pre);
 
	}
 
	cout<<n-pre<<"\n";
 
 
}
 
 
 
 
 
}
 
 
 
	 
