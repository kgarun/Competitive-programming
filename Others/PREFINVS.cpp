 
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
 
string s;
 
cin>>s;
 
ll flips=0,ans=0;
 
for(int i=s.size()-1;i>=0;--i){
 
	if(s[i]=='1'){
 
		if(flips&1) continue;
 
		++flips;
 
	}
 
	if(s[i]=='0'){
 
		if(flips&1) ++flips;
 
	}
 
}
 
cout<<flips<<"\n";
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
 
	 
