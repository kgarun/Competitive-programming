
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll inf = 1e16;

const int N = 1e5+5 , MOD = 1e9+7;





int main(void){

   //freopen ( "/home/arun/CP/input.txt", "r", stdin );

	ll h,root;

	string s;

	cin >> h;

	cin >> s;

	root  = 1LL << (h+1);

	ll ptr=0;

	for(char c:s){

		if(c=='L') ptr= ptr*2 + 1;

		else ptr = ptr*2 + 2;

	}

	cout<< root-1-ptr <<'\n';

}

