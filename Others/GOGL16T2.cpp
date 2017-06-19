/*
ID: kgarun51
PROG:
LANG: C++
*/
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
ifstream f("data.in");
 
ofstream g("data.out");
 
 
 
int main(){
 
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
	ll i,j,k,t=0,n,m,mins,maxs,cost,rem;
 
	map<ll,ll> costmap;
 
	cin>>n>>m;
 
	rem=n;
 
	for(i=0;i<m;++i){
 
        cin>>mins>>maxs>>cost;
 
        t+=mins*cost;
 
        costmap[cost]=maxs-mins;
 
        rem-=mins;
 
 
	}
 
	for(auto available:costmap){
 
 
            if(!rem) break;
 
            if((available.second)>0) {
 
            if((available.second)>=rem){
                t+=(rem*(available.first));
                break;
            }
            else{
                t+=(available.first)*(available.second);
                rem-=(available.second);
            }
 
            }
 
	}
 
	cout<<t;
 
 
 
    return 0;
}
 
