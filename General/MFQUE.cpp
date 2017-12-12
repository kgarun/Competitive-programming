/*
ID:kgarun51
PROG:
LANG:c++
*/
 
#include<bits/stdc++.h>
using namespace std;
 
ifstream f("input.txt");
ofstream g("output.txt");
 
#define ll long long int
#define llu uint64_t
 
ll n,t;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	int i,j,k;
	
	
	
 
		cin>>n;
 
		vector<int> a(n+1);
 
		for(i=1;i<=n;++i) cin>>a[i];
 
			int q,x,y,sum=0;
 
		cin>>q;
 
		
 
		while(q--){
			
           cin>>x>>y;
           k=0;
 
          vector<int> b;
 
		for(j=x;j<=y;++j) b.push_back(a[j]);
 
			
 
			sort(b.begin(),b.end());
 
		//for(j=0;j<b.size();++j)cout<<b[j]<<" ";
 
			sum=0;
 
		for(j=1;j<b.size();++j) sum+=((b[j]-b[j-1])*(b[j]-b[j-1]));
              cout<<sum<<"\n";
 
 
 
 
		
	}
 
	return 0;
} 
