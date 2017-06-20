 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
 
 
int t;
 
cin>>t;
 
while(t--){
 
string s;
 
cin>>s;
 
int seg=0;
 
if(s[0]=='1') seg=1;
 
for(int i=1;i<s.size();++i){
 
	if(s[i]=='1'){
 
		if(s[i-1]!='1') ++seg;
 
 
	}
 
 
 
}
 
if(seg!=1) cout<<"NO\n";
 
else cout<<"YES\n"; 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
 
	 
