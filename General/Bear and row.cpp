

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }

ll dp[100005];


int main(){

  syncOff();

  ll t,i,val,counter;

  cin>>t;

  while(t--){

  	string s;

  	cin>>s;

  	memset(dp,0,sizeof(dp));

  	val=counter=0;

  	ll x,y=s.size()-1;

  	bool zero=0;

  	for(i=s.size()-1;i>=0;--i){

  	 if(s[i]=='1') {dp[i]=counter;break;}

  	 ++counter;

  	}

  	if(s[s.size()-1]=='0') ++dp[i];



  	for(y=i,val=dp[i];i>=0;--i){

  		if(s[i]=='1'){

   			x=y-i+1;

  			if(i==y-1) dp[i]=dp[i+1];

  			else dp[i]=val+x-1;

  			val=dp[i];

  			y=i;

  		
  		}


  	}

  	long long ans=0;

  	for(i=0;i<s.size();++i) ans+=dp[i];

  	cout<<ans<<"\n";







  }  

  return 0;

}







