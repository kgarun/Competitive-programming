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
 
struct saree{
 
ll minc,maxc,cost;
 
saree(){
    minc=maxc=cost=0;
    }
 
}s[100005];
 
bool cmp(saree a,saree b){return a.cost<b.cost;}
 
 
 
int main(){
 
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
    ll i,j,k,t,n,m,total=0,rem=0,available;
 
 
 
    cin>>n>>m;
 
    rem=n;
 
    for(i=0;i<m;++i) {
            cin>>s[i].minc>>s[i].maxc>>s[i].cost;
            total+=s[i].minc*s[i].cost;
            rem-=s[i].minc;
    }
 
    sort(s,s+m,cmp);
 
    for(i=0;i<m;++i){
          /*  for(j=s[i].maxc-s[i].minc;j>0;--j)
            {
                total+=s[i].cost;
                --rem;
                 if(!rem) goto print;

            }*/
            available=s[i].maxc-s[i].minc;
 
            if(!rem) goto print;
 
            if(available>=rem){
                total+=rem*s[i].cost;
                goto print;
            }
            else{
                total+=available*s[i].cost;
                rem-=available;
            }
 
    }
 
    print:
    cout<<total;
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}
 
