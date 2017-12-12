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
 
	ll i,j,k,t,mid;
 
	bool f;
 
 
 
	cin>>t;
 
	while(t--){
 
            string s;
 
            f=0;
 
            unordered_map<char,int> cnt1,cnt2;
 
            cin>>s;
 
            mid=(s.size()/2);
 
            for(i=0;i<mid;++i) ++cnt1[s[i]];
 
            if(s.size()&1) for(i=mid+1;i<s.size();++i) ++cnt2[s[i]];
 
            else for(i=mid;i<s.size();++i) ++cnt2[s[i]];
 
 
            for(auto ptr:cnt1)  if(ptr.second!=cnt2[ptr.first]){f=1;break;}
 
            if(f) cout<<"NO\n";
 
            else cout<<"YES\n";
 
 
 
        }
 
 
 
 
 
 
    return 0;
}
 
