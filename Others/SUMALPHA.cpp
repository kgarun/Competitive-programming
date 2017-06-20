/*
ID:kgarun51
PROG:
LANG:c++
*/
 
#include<bits/stdc++.h>
using namespace std;
 
ofstream f("data.in");
ifstream g("data.out");
 
#define ll long long int
#define llu uint64_t
 
ll n,t;
 
map<char,int> val;
 
	
int main(){
 
	val['a']=val['f']=val['k']=val['p']=val['u']=val['z']=0;
 
	val['b']=val['g']=val['l']=val['q']=val['v']=1;
 
	val['c']=val['h']=val['m']=val['r']=val['w']=2;
 
	val['d']=val['i']=val['n']=val['s']=val['x']=3;
 
	val['e']=val['j']=val['o']=val['t']=val['y']=4;
 
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	int i,j,k;
 
 
 
	cin>>t;
 
	while(t--){
 
		j=0;
		string s;
 
		cin>>s;
 
		for(i=0;i<s.size();++i) j+=val[s[i]];
 
			cout<<j<<endl;
 
 
 
 
 
 
 
 
	}
 
 
 
 
 
 
	
 
 
 
 
 
	return 0;
} 
