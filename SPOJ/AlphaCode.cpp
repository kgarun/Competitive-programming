#include<bits/stdc++.h>
using namespace std;


int main(){

	
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
 


	while(1){

		uint64_t i,j;

		string s;

		cin>>s;

		if(s=="0") break;

		vector<uint64_t> dp(s.size()+1,0);

		dp[0]=1;

		dp[1]=1;

		for(i=1,j=2;i<s.size();++i,++j){

			if((s[i]!='0')&&(s[i-1]!='0')&&(s[i+1]!='0')&&((INT(s[i-1])*10+INT(s[i]))<=26)) dp[j]=dp[j-1]+dp[j-2];

			else dp[j]=dp[j-1];

		}

		cout<<dp[i]<<"\n";

	}

	return 0;

}
