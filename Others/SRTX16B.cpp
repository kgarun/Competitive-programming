#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define MOD 1000000007
 
#define matrix vector< vector<ll> >
 
matrix temp(2);
 
matrix multiply(matrix a,matrix b){
 
	matrix cpy(2);
 
	cpy[0].resize(2);
 
	cpy[1].resize(2);
 
	for(int i=0;i<2;++i) for(int j=0;j<2;++j){
 
			ll temp=0;
 
			for(int k=0;k<2;++k) temp+=(a[i][k]*b[k][j]);
 
			cpy[i][j]=(temp%MOD);
 
		}
 
	return cpy;
 
}
 
 
matrix nthfib(ll n){
 
	if(n<=1) return temp;
 
	if(n&1) return multiply(temp,nthfib(n-1));
 
	matrix t=nthfib(n/2);
 
	return multiply(t,t);
 
}
 
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
temp[0].resize(2),temp[1].resize(2);
 
temp[0][0]=0;
 
temp[0][1]=temp[1][0]=temp[1][1]=1;	
 
ll n,t;
 
cin>>t;
 
	while(t--){
 
		cin>>n;
 
 		matrix fib=nthfib(n);
 
 		if(n==0) cout<<"0\n";
 
 		else cout<<fib[0][1]<<"\n";
 
	}
 
} 
