 
#include <bits/stdc++.h>
using namespace std;
 
const int N=55;
 
int flip1(string s){
 
	int ans=0;
 
 
	for(int i=0;i<s.size();++i){
 
		if(s[i]=='U'){
 
			++ans;
 
			while(s[i]=='U') ++i;
		}
 
	}
 
	return ans;
 
 
}
 
 
int flip2(string s){
 
	int ans=0;
 
 
	for(int i=0;i<s.size();++i){
 
		if(s[i]=='D'){
 
			++ans;
 
			while(s[i]=='D') ++i;
		}
 
	}
 
	return ans;
 
 
}
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
int t;
 
cin>>t;
 
while(t--){
 
	int n;
 
	cin>>n;
 
	vector< pair<int,int> > candidate;
 
	for(int i=1;i<n;++i) candidate.emplace_back(make_pair(i,i+1));
 
	candidate.emplace_back(make_pair(n,1));
 
	cout<<candidate.size()<<"\n";
 
	int k=0,start;
 
	for(int i=1;i<=n;++i){
 
		cout<<n<<"\n";
 
		start=k;
 
		for(int j=1;j<=n;++j){
 
			if(start>=n) start%=n;
 
			cout<<j<<" "<<candidate[start].first<<" "<<candidate[start].second<<"\n";
 
			++start;
		}
 
		++k;
 
	}
 
	
}
 
 
 
}
 
 
 
	 
