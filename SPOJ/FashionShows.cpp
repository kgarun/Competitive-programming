#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){return a>b;}
int main(){
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	long long t;

	cin>>t;

	while(t--){

		int n,i,j;

		cin>>n;

		long long ans1=0,ans2=0;

		vector<long long> a(n),b(n);

		for(i=0;i<n;++i) cin>>a[i];

		for(i=0;i<n;++i) cin>>b[i];

		sort(a.begin(),a.end());

		sort(b.begin(),b.end(),cmp);

		/*for(auto ptr:a) cout<<ptr<<" ";

		cout<<"\n";

		for(auto ptr:b) cout<<ptr<<" ";
		*/

		for(i=0;i<n;++i) ans1+=(a[i]*b[i]);

		for(i=0,j=n-1;i<n;++i,--j) ans2+=(a[i]*b[j]);

		cout<<max(ans1,ans2)<<"\n";

	}


}