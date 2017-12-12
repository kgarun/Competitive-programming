 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
 
 
 
void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }
 
 
int main(){
 
  syncOff();
 
  ll t,i,j,k;
 
  cin>>t;
 
  while(t--){
 
    ll n;
 
    string a;
 
    map< string ,ll > m;
 
    for(i=0;i<8;++i) cin>>a,++m[a];
 
    	j=0;
 
    for(auto ptr:m){
 
    	if(ptr.second>1) ++j;
 
 
    }
 
    if(j>=2) cout<<"similar\n";
    else cout<<"dissimilar\n";
 
    
 
  }
 
  
 
  return 0;
 
}
 
 
 
 
 
 
 
 
