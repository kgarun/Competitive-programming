 
 
#include<bits/stdc++.h>
using namespace std;
 
 
void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }
 
int main(){
 
  syncOff();
 
  long long x,y,z,i,t;
 
  unordered_map<long long ,long long> m;
 
  cin>>x>>y>>z;
 
  for(i=0;i<x;++i) cin>>t,++m[t];
 
  for(i=0;i<y;++i) cin>>t,++m[t];
 
  for(i=0;i<z;++i) cin>>t,++m[t];
 
  set<long long> s;
 
  for(auto ptr:m) if(ptr.second>=2) s.insert(ptr.first);
 
 
 
 
cout<<s.size();
 
  for(auto ptr:s) cout<<"\n"<<ptr;  
 
  
  
 
  return 0;
 
}
 
 
 
 
 
