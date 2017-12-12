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
 
int a[5005];
 
int main(){
 
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
	ll i,j,k,t,n,pre,min_d;
 
	cin>>t;
 
	while(t--){
 
	    cin>>n;
 
        for(i=0;i<n;++i) cin>>a[i];
 
        sort(a,a+n);
 
        min_d=INT_MAX;
 
        pre=a[0];
 
        for(i=1;i<n;++i){
 
                min_d=(a[i]-pre<min_d)?a[i]-pre:min_d;
 
                pre=a[i];
 
        }
 
        cout<<min_d<<"\n";
 
 
 
 
 
 
	}
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}
 
