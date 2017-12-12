 
 
#include<bits/stdc++.h>
using namespace std;
 
void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }
 
 
int main(){
 
  syncOff();
 
  long t,i,j,k,x,y;
 
  cin>>t;
 
  while(t--){
 
    long n,m;
 
    string s;
 
    bool flag=0,check=0;
 
    cin>>n>>m>>s;
 
    for(i=0;i<n;++i)
    	for(j=0;j<m;++j){
 
    		x=i,y=j;
 
    		check=0;
 
    		for(auto c:s){
 
    			if(c=='L') y-=1;
 
    			if(c=='R') y+=1;
 
    			if(c=='U') x-=1;
 
    			if(c=='D') x+=1;
 
    			if(x>=n || y>=m || x<0 || y< 0) {check=1;break;}
 
 
 
 
    		}
 
    		if(!check) {flag=1;break;}
 
 
 
    	}
 
    if(flag) cout<<"safe\n";
 
    else cout<<"unsafe\n";
 
    
 
  }
 
  
 
  return 0;
 
}
 
 
 
 
 
