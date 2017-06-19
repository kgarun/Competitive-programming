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
 
ll i,j,k,t;
 
int main(){
 
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
    j=0;
 
    cin>>t>>k;
 
    while(t--){
 
        cin>>i;
 
        if(i%k==0) ++j;
 
    }
 
    cout<<j;
 
 
 
 
 
    return 0;
}
 
