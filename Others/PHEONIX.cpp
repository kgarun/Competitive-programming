 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
 
int t;
 
cin>>t;
 
while(t--){
 
	int n,i,h[10005],temp;
	cin>>n;
 
	set<int> s;
 
	for(i=0;i<n;++i) cin>>h[i],s.insert(h[i]);
 
	map< int, vector<int> > v;
 
	
 
	for(i=0;i<n;++i){
 
		cin>>temp;
 
		v[h[i]].push_back(temp);
 
	}
	
	bool flag=0;
 
	for(auto loop:s){
 
		//cout<<loop<<"\n";
 
		flag=0;
 
		for(auto ptr:v[loop]){
 
			//cout<<ptr<<" ";
 
			if(ptr<15) {flag=1;break;}
 
 
 
		}
 
		if(flag==0) break;
 
 
 
 
 
 
	}
 
	if(flag==0 && s.size()==1) cout<<"Party\n";
 
	else cout<<"No Party\n";
 
	
	
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
}
 
 
 
	 
