 
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
 
int n;
 
cin>>n;
 
while(n--){
 
	string s;
 
	cin>>s;
 
	cout<<min(flip1(s),flip2(s))<<"\n";
 
}
 
 
 
}
 
 
 
	 
