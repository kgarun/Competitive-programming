#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
	string s;
	
	cin>>s;
 
	int t;
 
	cin>>t;
 
	while(t--){
 
		string a;
 
		int i,j=0;
 
		cin>>a;
 
		for(i=0;i<a.size();++i) if(find(s.begin(),s.end(),a[i])==s.end()) {j=1;break;}
 
		if(j) cout<<"No\n";
 
		else cout<<"Yes\n";
 
 
	}
 
} 
