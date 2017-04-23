
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){

ios_base::sync_with_stdio(0);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t;

cin>>t;

while(t--){

	int a,b,l=0,m=0,c=1;

	cin>>a>>b;

	for(;;++c){

		if(c&1) l+=c;

		else m+=c;

		if(l>a || m>b) break;

	}

	if(l>a) cout<<"Bob\n";

	else cout<<"Limak\n";




}










}



	