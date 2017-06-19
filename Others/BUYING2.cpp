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
 
	ll i,j,k,t,a[105],sum=0,tot,n;
 
	cin>>t;
 
	while(t--){
 
            sum=0;
 
            cin>>n>>k;
 
            for(i=0;i<n;++i) {cin>>a[i];sum+=a[i];}
 
            sort(a,a+n);
 
            tot=sum/k;
 
            if(tot==(sum-a[0])/k) cout<<-1<<"\n";
 
            else cout<<tot<<"\n";
 
 
 
 
 
 
 
 
 
 
 
	}
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}
 
