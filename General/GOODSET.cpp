 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector<int> s;
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
for(int i=1;i<=500;++i){
 
	bool flag=0;
 
	for(int j=0;j<s.size();++j)
		for(int k=j+1;k<s.size();++k) {
 
			if(s[j]+s[k]==i){
 
				flag=1;
 
				break;
			}
 
		}
 
	if(!flag) s.push_back(i);
 
 
 
	
 
}
 
 
 
int t;
 
cin>>t;
 
while(t--){
 
	int n;
 
	cin>>n;
 
	for(int i=0;i<n;++i) cout<< s[i]<<" ";
 
	cout<<"\n";
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
 
	 
