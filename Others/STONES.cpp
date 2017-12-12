/*
ID: kgarun51
PROG:
LANG: C++
*/
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
ifstream f("data.in");
 
ofstream g("data.out");
 
 
 
int main(){
 
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
	ll i,j,k,t,tot;
 
	bool f;
 
 
 
	cin>>t;
 
	while(t--){
 
            string j,s;
 
            tot=0;
 
            cin>>j>>s;
 
            unordered_map<char,bool> cnt;
 
 
            for(i=0;i<j.size();++i) cnt[j[i]]=1;
 
 
            for(char c:s)  if(cnt[c]==1) ++tot;
 
 
 
             cout<<tot<<"\n";
 
 
 
        }
 
 
 
 
 
 
    return 0;
}
 
