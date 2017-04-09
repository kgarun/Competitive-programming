#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	uint64_t t,n,i,temp,val,j;

	cin>>t;

	while(t--){

		cin>>n;

		val=n;

		n-=1;

		j=n%4;

		n/=4;

		temp=(n*1000);

		//cout<<temp<<" "<<n<<"\n";

		
		
				switch(j){

				//	cout<<"i="<<i<<" "<<n<<"\n";

					case 0:cout<<temp+192<<"\n";
					break;
					case 1:cout<<temp+442<<"\n";
					break;
					case 2:cout<<temp+692<<"\n";
					break;
					case 3:cout<<temp+942<<"\n";
					break;
				}
		

		
	}

	

	return 0;

}
