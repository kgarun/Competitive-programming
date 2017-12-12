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
 
    double x,y;
 
    cin>>x>>y;
 
    if(x>=y-0.50 || (int)x%5!=0) printf("%0.2f",y);
 
    else printf("%0.2f",y-x-0.50);
 
 
 
 
 
    return 0;
}
 
