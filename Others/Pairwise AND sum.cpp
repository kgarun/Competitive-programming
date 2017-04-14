#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }

ll bits[32];



int main(){

  syncOff();

  ll n,temp,i,pos,ans=0,cnt;

  cin>>n;

  for(i=0;i<n;++i){

  		cin>>temp;

  		pos=0;

  		while(temp){

  			if(temp & 1) ++bits[pos];

  			temp/=2;

  			++pos;
  		}

  }

   for(i=0;i<32;++i)	ans+=(1<<i)*(bits[i]*(bits[i]-1)/2);

	cout<<ans<<"\n";
  

  return 0;

}







