#include <bits/stdc++.h>
using namespace std;

int dp[6200][6200];

int compute(string &s,int i,int j){

	if(i>j) return 0;

	if(!dp[i][j]){

		if(i==j || s[i]==s[j]) dp[i][j]=compute(s,i+1,j-1);

		else{

			dp[i][j]=min(1+compute(s,i+1,j),1+compute(s,i,j-1));
		}

	}

	return dp[i][j];
}


int main(){

	int t;

	cin>>t;

	while(t--){

		memset(dp,0,sizeof(dp));

		string s;

		cin>>s;

		cout<<compute(s,0,s.size()-1)<<'\n';

	}

}