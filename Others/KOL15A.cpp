/*
ID: kgarun51
PROG:KOL15A
LANG: C++
*/
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
ifstream f("data.in");
 
ofstream g("data.out");
 
ll i,j,k,t;
 
int main(){
 
    char s[1005];
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
    cin>>t;
 
    while(t--){
 
            cin>>s;
 
            k=0;
 
            j=strlen(s);
 
            for(i=0;i<j;++i){
 
                    if( s[i] >= '1' && s[i] <= '9') k+=(s[i]-48);
 
 
            }
 
            cout<<k<<"\n";
 
 
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
    return 0;
}
 
