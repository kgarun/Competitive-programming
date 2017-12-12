 
 
#include<bits/stdc++.h>
using namespace std;
 
 
void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }
 
int main(){
 
  syncOff();
 
  long long n,q,mx,pos=0;
 
  cin>>n>>mx;
 
  vector<long long> a(n);
 
  for(long long i=0;i<n;++i) cin>>a[i];
 
  	bool flag=0;
 
  while(1){
 
  	cin>>q;
 
  	if(!q) break;
 
  	if(q==1 && pos!=0) --pos;
 
  	else if(q==2 && pos!=n-1) ++pos;
 
  	else if(q==3 && a[pos]!=0 && !flag) --a[pos],flag=1;
 
  	else if(q==4 && a[pos]<mx && flag) ++a[pos],flag=0;
 
  }
 
  for(auto ptr:a) cout<<ptr<<" ";  
 
  
  
 
  return 0;
 
}
 
 
 
 
 
