 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int a[100005],ans[100005];
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
int t,i,j,k;
 
cin>>t;
 
while(t--){
 
	int n;
 
	cin>>n;
 
	for(i=1;i<=2*n;++i) cin>>a[i];
 
	sort(a+1,a+(1+2*n));
 
	cout<<a[n+1+(n/2)]<<"\n";
 
	i=1,j=2*n;
 
	for(k=1;k<=2*n;++k){
 
		if(k&1) cout<<a[i++]<<" ";
 
		else cout<<a[j--]<<" ";
 
 
 
	}
 
	cout<<"\n";
 
	
 
	
 
 
}
 
 
 
 
 
}
 
 
 
	 
