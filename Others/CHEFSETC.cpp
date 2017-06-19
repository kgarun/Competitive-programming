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
 
	ll i,j,k,t,a[4],temp,sum;
 
	bool ans;
 
	cin>>t;
 
	while(t--){
 
        ans=0;
 
	    for(i=0;i<4;++i) cin>>a[i];
 
        for(i=1;i<17;++i){
 
                j=3;
 
                k=i;
 
                sum=INT_MAX;
 
                while(k){
 
                    temp=k&1;
 
 
 
                    if(temp){
 
                            if(sum==INT_MAX) sum=a[j];
 
                            else sum+=a[j];
 
                    }
 
                    k>>=1;
 
                    --j;
 
 
 
                }
 
 
 
               if(sum==0) {ans=1;break;}
 
 
 
 
 
        }
 
        if(ans) cout<<"Yes\n";
 
        else cout<<"No\n";
 
 
 
 
 
 
 
 
 
 
 
	}
 
 
 
 
 
 
 
 
 
 
    return 0;
}
 
