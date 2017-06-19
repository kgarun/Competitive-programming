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
 
ll i,j,k,t,o,e;
 
int main(){
 
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
   // cin>>t;
 
    //while(t--){
 
 
            cin>>k;
 
            o=e=0;
 
            while(k--){
 
 
 
                    cin>>i;
 
                    if(i&1) ++o;
 
                    else ++e;
 
            }
 
 
            if(o>=e) cout<<"NOT READY\n";
 
            else cout<<"READY FOR BATTLE\n";
 
 
    //}
 
 
    return 0;
}
 
