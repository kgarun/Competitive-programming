 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int a[100005];
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
int t,i,j;
 
cin>>t;
 
while(t--){
 
	string s;
 
	cin>>s;
 
	bool p=0;
 
	for(i=0;i<s.size() && p==0;++i){
 
		for(j=i-1;j>=0 && j>=i-2;--j){
 
			if(s[j]>s[i]) {puts("no"),p=1;break;}
		}
 
	}
 
	if(p==0)puts("yes");
 
 
}
 
 
 
 
 
}
 
 
 
	 
