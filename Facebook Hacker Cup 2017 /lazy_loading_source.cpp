/*
ID:kgarun51
PROG:
LANG:c++
*/

#include<bits/stdc++.h>
using namespace std;

ifstream f("lazy_loading.txt");
ofstream g("lazy_loading.out");


#define ll long long int
#define llu uint64_t

ll n,t,ctr=0;

int main(){


	int i,j,k,cnt,temp,mul,tp;

	f>>t;
	
	while(t--){

		cnt=0;

		f>>n;
		vector<ll> a(n+1);

		a[0]=-234567;

		for(i=1;i<=n;++i){

			f>>k;

			a[i]=k;

		}

		sort(a.begin(),a.end());

		for(i=1,j=n;i<=j;--j){

			if(a[j]>=50) ++cnt;

			else{

				tp=temp=a[j];

				mul=1;

				while(tp<50){
					tp+=temp;
					++mul;

				}

				--mul;


				i+=mul;

				if(i<=j) ++cnt;



			}



		}

		g<<"Case #"<<++ctr<<": "<<cnt<<"\n";
	
	
	}



	





	return 0;
}