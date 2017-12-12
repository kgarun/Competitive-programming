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
 
	ll i,j,k,t,maxs,temp,cnt=0,n;
 
	cin>>t;
 
	while(t--){
 
            cnt=1;
 
            cin>>n;
 
            if(!n) cout<<0<<"\n";
 
            else{
 
                cin>>maxs;
                while(--n){
 
                        cin>>temp;
 
                        if(temp<=maxs) {
 
                                ++cnt;
 
                                maxs=temp;
                        }
 
 
 
                }
 
            cout<<cnt<<"\n";
 
 
            }
 
 
 
 
 
 
 
	}
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}
 
