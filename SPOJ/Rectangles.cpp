#include<bits/stdc++.h>
using namespace std;




int main(){

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	uint64_t t,n,i,dp[100005],j;

	dp[0]=0;

	cin>>n;

	for(i=1;i<=n;++i){

		dp[i]=dp[i-1]+1;

		for(j=2;j<=sqrt(i);++j){

			if(i%j==0) ++dp[i];


		}

	}

	cout<<dp[n]<<"\n";

	return 0;

}

