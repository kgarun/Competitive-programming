#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	uint64_t t,n,i,temp;

	cin>>t;

	while(t--){

		uint64_t sum=0;

		cin>>n;

		for(i=0;i<n;++i){

			cin>>temp;

			sum+=temp;

			if(sum>n) sum%=n;

		}

		if(sum%n) cout<<"NO\n";

		else cout<<"YES\n";

	}

	

	return 0;

}

