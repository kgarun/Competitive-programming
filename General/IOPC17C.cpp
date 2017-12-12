 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
int t;
 
cin>>t;
 
while(t--){
 
	int i,j,n,ans=0;
 
	cin>>n;
 
	int a[n];
 
	for(i=0;i<n;++i) cin>>a[i];
 
	sort(a,a+n);
 
	for(i=n-2;i>=0;--i) ans=max(ans,a[i]%a[n-1]);
 
	for(i=n-3;i>=0;--i) ans=max(ans,a[i]%a[n-2]);
 
	for(i=n-4;i>=0;--i) ans=max(ans,a[i]%a[n-3]);
 
	for(i=n-5;i>=0;--i) ans=max(ans,a[i]%a[n-4]);
 
 
 
	cout<<ans<<"\n";
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
}
 
 
 
	 
