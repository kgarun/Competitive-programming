 
 
#include<bits/stdc++.h>
using namespace std;
 
 
 
typedef long long ll;
 
 
int visited[100005];
 
 
 
 
void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }
 
 
int main(){
 
  syncOff();
 
  ll t,i,j,k,n,temp,temp1,I;
 
  cin>>t;
 
  for(I=1;I<=t;++I){
 
    cin>>n>>k;
 
    vector< vector<int> > v(n);
 
    for(i=0;i<n;++i){
 
    	cin>>temp;
 
    	v[i].resize(temp);
 
    	for(j=0;j<temp;++j) cin>>v[i][j];
 
 
 
    }
 
bool some=0,sad=0;
 
	for(i=0;i<n;++i){
 
		temp=0;
 
		for(auto ptr:v[i]){
 
			if(visited[ptr]==I){
 
				++temp;
 
			}
 
			else visited[ptr]=I;
 
 
		}
 
		if(temp==v[i].size()) some=1;
 
 
	}
 
	for(i=1;i<=k;++i) {
 
		if(visited[i]!=I){sad=1;break;}
 
 
 
	}
 
	if(sad) cout<<"sad\n";
 
	else if(some) cout<<"some\n";
 
	else cout<<"all\n";
 
    
 
  }
 
  
 
  return 0;
 
}
 
 
 
 
 
 
 
 
