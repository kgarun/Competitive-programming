#include <bits/stdc++.h>
using namespace std;

const int N=1e2;

int a[]={0,3,2,7,1},s=6;

vector<int> subset;

bool dp[N][N];



bool isSubsetSum(int n,int sum){

	for(int i=0;i<=n;++i)	dp[i][0]=1;	

	for(int i=1;i<=n;++i) for(int j=1;j<=sum;++j){

		if(j<a[i]) dp[i][j]=dp[i-1][j];

		else dp[i][j]= ( dp[i-1][j] || dp[i-1][j-a[i]] );


	}

	return dp[n][sum];


}




void backtrack(int i,int j){

	if(i<=0||j<=0) return;

	if(dp[i][j]==dp[i-1][j]) backtrack(i-1,j);

	else{

		subset.emplace_back(a[i]);

		backtrack(i-1,j-a[i]);

	}

}

int main(){

	cout<<isSubsetSum(4,s)<<"\n";

	backtrack(4,s);

	for(auto ptr:subset) cout<<ptr<<" ";


}