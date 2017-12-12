#include <bits/stdc++.h>
using namespace std;
 
 
bool flag[1024];// Maximum String Length
 
vector< string > permutations;
 
void permute(string s,string t){
 
	if(t.size()==s.size()) permutations.push_back(t);
 
	else{
 
		for(int i=0;i<s.size();++i){
 
			if(flag[i]==0){
 
				flag[i]=1;
 
				permute(s,t+s[i]);
 
				flag[i]=0;
 
			}
 
		}
 
	}
 
 
}
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	string s;
 
	cin>>s;
 
	permute(s,"");
 
	for(auto p:permutations) cout<<p<<"\n";
 
 
} 
