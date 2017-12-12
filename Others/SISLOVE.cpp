#include<bits/stdc++.h>
using namespace std;
 
int MIN(int x,int y,int z){ return min(min(x,y),z); }
 
int compute(string s,string d){
 
	int p[d.size()+1][s.size()+1],i,j;
 
	for(i=0;i<=d.size();++i)   for(j=0;j<=s.size();++j)  p[i][j]=0;
 
	for(i=0;i<=d.size();++i){
 
		for(j=0;j<=s.size();++j){
 
			if(i==0) p[i][j]=j;
 
			else if(j==0) p[i][j]=i;
 
			else{
 
				if(d[i-1]==s[j-1]) p[i][j]=p[i-1][j-1];
 
				else{
 
					p[i][j]=MIN(p[i-1][j-1],p[i-1][j],p[i][j-1])+1;
				}
			}
 
		}
 
	}
 
	return p[d.size()][s.size()];
}
 
 
int main(){
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
 
	int t;
 
	vector<string> v={"one","two","three","four","five","six","seven","eight","nine","ten","zero"};
 
	map<string,int> m;
 
	m["one"]=1; m["five"]=5;
 
	m["two"]=2; m["six"]=6;
 
	m["three"]=3; m["seven"]=7;
 
	m["four"]=4; m["eight"]=8;
 
	m["nine"]=9; m["zero"]=0;
 
	cin>>t;
 
	while(t--){
 
		string s,d,ans;
 
		cin>>s;
 
		for(auto d:v){
 
			if((compute(s,d)==1 )&& (s.size()==d.size())){ ans=d; break;}
 
 
 
		}
 
 
		cout<<m[ans]<<"\n";
 
	}
 
	return 0;
 
} 
