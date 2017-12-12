 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector< set<string> > unblocked;
 
vector< string > blocked,t;
 
set<string> ans;
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
int n,i,len=0;
 
char c;
 
string temp;
 
cin>>n;
 
for(i=0;i<n;++i){
 
	cin>>c>>temp;
 
	if(c=='+') {
 
		len=max(len,(int)temp.size());
		t.push_back(temp);
 
	}
 
	else blocked.push_back(temp);
 
}
 
unblocked.resize(len);
 
for(string s:t){
 
	string prefix;
 
	for(i=0;i<s.size();++i){
 
		prefix+=s[i];
 
		unblocked[i].insert(prefix);
 
	}
 
}
 
bool invalid=0;
 
for(string s:blocked){
 
	string prefix;
 
	bool prefixfound=0;
 
	for(i=0;i<s.size();++i){
 
		prefix+=s[i];
 
		if(i>=len || unblocked[i].find(prefix)==unblocked[i].end()){
 
			ans.insert(prefix);
 
			prefixfound=1;
 
			break;
		}
 
	}
 
	if(prefixfound==0) invalid=1;
 
 
 
}
 
if(ans.size()==0 || invalid==1) cout<<-1<<"\n";
 
else {
 
	cout<<ans.size()<<"\n";
 
	for( auto s:ans) cout<<s<<"\n";
 
 
 
}
 
 
 
 
 
 
 
 
 
 
}
 
 
 
	 
