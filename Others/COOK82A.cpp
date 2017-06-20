 
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
 
	map<string,int> m;
 
	string a;
 
	int g;
 
	cin>>a>>g;
 
	m[a]=g;
 
	cin>>a>>g;
 
	m[a]=g;
 
	cin>>a>>g;
 
	m[a]=g;
 
	cin>>a>>g;
 
	m[a]=g;
 
	if(m["Barcelona"]>m["Eibar"] && m["RealMadrid"]<m["Malaga"]) cout<<"Barcelona\n";
 
	else cout<<"RealMadrid\n";
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
}
 
 
 
	 
