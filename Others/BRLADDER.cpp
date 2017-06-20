 
 
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
 
    cin>>i>>j;
 
    if(((i%2==0) && (j%2==0)) || ((i%2==1) && (j%2==1))){
 
    	if(i>j) swap(i,j);
 
    	if(j-i==2) cout<<"YES\n";
 
    	else cout<<"NO\n";
 
 
 
 
 
 
    }
 
    
 
    else{
 
    	if(i>j) swap(i,j);
 
    	if((j-i==1) && ((j/2) == (i/2)+1))cout<<"YES\n";
 
    	else cout<<"NO\n";
 
 
 
 
 
 
    }
 
 
 
    
 
 
 
 
 
 
 
 
    
 
  }
 
  
 
  return 0;
 
}
 
 
 
 
 
