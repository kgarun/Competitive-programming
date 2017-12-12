 
 
#include<bits/stdc++.h>
using namespace std;
 
 
void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }
 
 
bool equal(double x,double y){  return fabs(x-y)<numeric_limits<double>::epsilon(); }
 
 
int main(){
 
  syncOff();
 
  long long t,i,j,w,k,mx=0,a=0,b=0;
 
  vector< pair<long,long> > v;
 
  cin>>t;
 
  for(i=0;i<t;++i){
 
  	cin>>j>>k;
 
  	a+=j;
 
  	b+=k;
 
  	if(a>b) v.push_back(make_pair(a-b,1));
 
  	else v.push_back(make_pair(b-a,2));
 
  }
 
  mx=0;
 
  for(auto ptr:v){
 
  	//cout<<"winner: "<<ptr.second<<" lead:"<<ptr.first<<"\n";
 
  	if(mx<ptr.first) mx=ptr.first,w=ptr.second;
 
 
  }
 
cout<<w<<" "<<mx;
  
 
  return 0;
 
}
 
 
 
 
 
