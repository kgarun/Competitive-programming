#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const float eps = 1e-6;

int main(void) {

	ll n,ans=0;

	float p;

	cin>>n>>p;

	for(int i=3;i<=n;++i){

		for(int j=i/2;j<=i;++j){

			float num=j*(j-1);

			float deno=i*(i-1);

			if(abs(num/deno - p)<=eps)++ans;


		}

	}

	cout<<ans<<"\n";

}

