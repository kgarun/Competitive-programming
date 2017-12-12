#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef array < array < ll , 2 > , 2 > matrix;
const int MOD=1e9+7;

matrix f = {0,1,1,1};

matrix multiply(matrix a,matrix b){
	matrix c = {0,0,0,0};
	c[0][0]=(a[0][0]*b[0][0] + a[0][1]*b[1][0])%MOD;
    c[0][1]=(a[0][0]*b[0][1] + a[0][1]*b[1][1])%MOD;
    c[1][0]=(a[1][0]*b[0][0] + a[1][1]*b[1][0])%MOD; 
    c[1][1]=(a[1][0]*b[0][1] + a[1][1]*b[1][1])%MOD; 
    return c;
}

matrix matPow(matrix a,ll p){
	if(p==1) return f;
	if(p&1) return multiply(matPow(a,p-1),f);
	matrix x = matPow(a,p/2);
	return multiply(x,x);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		matrix a = matPow(f,n+2);
		cout<<a[0][1]<<'\n';
		
	}
	return 0;
}