 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const int N=1e5+5;
 
ll a[N],dp[N];
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
ll t,n,ans;
 
cin>>t;
 
while(t--){
 
	cin>>n;
 
	ans=0;
 
	fill(dp,dp+n,1);
 
	for(int i=0;i<n;++i) cin>>a[i];
 
	for(int i=1;i<n;++i) if(a[i]>=a[i-1]) dp[i]=dp[i-1]+1;
 
	for(int i=0;i<n;++i) ans+=dp[i];
 
	cout<<ans<<'\n';
 
}
 
 
 
}
 
 
 
	 
