 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
unordered_map<int,int> valcount;
 
set<int> val;
 
deque<bool> a;
 
deque<int> b;
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
int n,k,q,i,j,cnt=0;
 
string s;
 
cin>>n>>k>>q;
 
if(k>n) k=n;
 
a.resize(n);
 
b.resize(n);
 
for(i=0;i<n;++i) cin>>a[i];
 
cin>>s;
 
for(i=0;i<k;++i) if(a[i]) ++b[0];
 
++valcount[b[0]];
 
val.insert(0);
 
val.insert(b[0]);
 
for(i=1;i<n-k+1;++i){
 
	b[i]=b[i-1]-a[i-1]+a[i+k-1];
 
	++valcount[b[i]];
 
	val.insert(b[i]);
}
 
//for(i=0;i<n;++i) cout<<b[i]<<" ";
 
//cout<<"\n";
 
for(auto c:s){
 
	if(c=='?') {
 
		//for(i=0;i<n;++i) cout<<a[i]<<" ";
 
		//cout<<"\n";
 
		cout<<*val.rbegin()<<"\n";
 
	}
 
	else{
 
		--valcount[b[n-k]];
 
		if(!valcount[b[n-k]]) val.erase(b[n-k]);
 
		bool temp=a[n-1];
 
		a.pop_back();
 
		a.push_front(temp);
 
		b.push_front(b[0]+a[0]-a[k]);
 
		++valcount[b[0]];
 
		val.insert(b[0]);
 
		b.pop_back();
 
	}
 
	
 
 
 
 
}
 
 
 
}
 
