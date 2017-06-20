 
 
#include<bits/stdc++.h>
using namespace std;
 
#define INT(x)  (x-'0')
#define CHAR(x) (x+'0')
 
void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }
 
 
bool equal(double x,double y){  return fabs(x-y)<numeric_limits<double>::epsilon(); }
 
 
int main(){
 
  syncOff();
 
  uint64_t t,i,j,k;
 
  cin>>t;
 
  while(t--){
 
    uint64_t n,ans=0;
 
    unordered_map<uint64_t,uint64_t> m;
 
    cin>>n;
 
    for(i=0;i<n;++i){
 
    	cin>>k;
 
    	++m[k];
 
 
 
 
    }
 
    for(auto ptr:m){
 
    	if(ptr.second>1){
 
    		ans+=((ptr.second*(ptr.second-1))/2);
    		
 
 
 
    	}
 
 
 
 
    }
 
    cout<<ans*2<<"\n";
 
    
 
  }
 
  
 
  return 0;
 
}
 
 
 
 
 
