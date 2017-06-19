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
 
	ll i,j,k,t,g,n,q,head,tail;
 
	bool he,ta;
 
	cin>>t;
 
	while(t--){
 
 
            cin>>g;
 
            while(g--){
 
                    he=ta=0;
 
                    head=tail=0;
 
 
                    cin>>i>>n>>q;
 
                    if(n&1==0) cout<<n/2<<"\n";
 
                    else{
 
                        if(i==q) cout<<n/2<<"\n";
 
                        else cout<<n-n/2<<"\n";
 
 
 
 
                    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
            }
 
 
	}
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}
 
