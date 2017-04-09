#include<bits/stdc++.h>
using namespace std;

#define INT(x)  (x-'0')
#define CHAR(x) (x+'0')

void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }

bool isPalindrome(string s){

  uint64_t i=0,j=s.size()-1;

  while(i<j){

    if(s[i]!=s[j]) return 0;

    ++i;

    --j;

  }

  return 1;
}

bool equal(double x,double y){  return fabs(x-y)<numeric_limits<double>::epsilon(); }


int main(){

  syncOff();

  uint64_t t,i,j,k;

  //cin>>t;
 
  while(1){

    double sum,ans=0;

    cin>>sum;

    if(equal(sum,0.00)) break;

    for(i=2,j=1;;++i,++j){

      ans+=1/(double)i;

      if(equal(ans,sum)  || ans>sum) break;

    }

    cout<<j<<" card(s)\n";

    

  }

  

  return 0;

}


