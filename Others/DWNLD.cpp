#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
 
	int t;
 
	cin>>t;
 
 
	while(t--){
 
		long n,k,cost=0,x,y;
 
		cin>>n>>k;
 
		for(long i=1;i<=n;++i){
 
			cin>>x>>y;
 
			if(k>0){
 
				if(x>k) {
					x-=k;
					cost+=(y*x);
					k=0;
				}
 
				else k-=x;
 
			}
 
			else cost+=(y*x);
 
 
 
		}
 
		cout<<cost<<"\n";
 
 
 
 
 
 
 
 
 
	}
 
 
 
 
 
 
 
} 
