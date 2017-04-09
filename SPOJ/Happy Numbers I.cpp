#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){

	ll t;

	cin>>t;

	while(t--){

		ll n,s,i,j,cnt=0;

		cin>>n>>s;

		vector<bool> visited(n+1,0);

		for(i=n;i>0;--i){

			if(visited[i]==0){

				++cnt;

				visited[i]=1;

				for(j=1;j<=sqrt(i);++j){

					if(j%i==0 && visited[j]==0) visited[j]=1;
				}

			}

		}

		if(cnt&1){

			if(s==0) cout<<"Airborne wins.\n";

			else cout<<"Pagfloyd wins.\n";

		}

		else{

			if(s==1) cout<<"Airborne wins.\n";

			else cout<<"Pagfloyd wins.\n";




		}


	}

	

}