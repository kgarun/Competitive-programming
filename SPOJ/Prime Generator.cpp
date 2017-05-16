
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> primes;

unordered_map<ll,bool> flag;


void precompute(){

	ll i,e=sqrt(1e12)+1,j;

	flag[0]=flag[1]=1;

	for(i=2;i<e;++i){   

		if(!flag[i]){

			 primes.push_back(i);

			for(j=i*i;j<e;j+=i) flag[j]=1;
		}
	}

}

int main(){

ios_base::sync_with_stdio(0);
cin.tie(NULL);

ll t,i,e,j,k,l,r;

precompute();

cin>>t;

while(t--){

	flag.clear();

	cin>>l>>r;

	flag[0]=flag[1]=1;

	e=sqrt(r)+1;

	for(auto itr:primes){  

		if(itr>e) break;

		for(j=(l/itr)*itr;j<=r;j+=itr){  

			if(itr!=j) flag[j]=1;
		}

	}

	
	for(i=l;i<=r;++i) if(!flag[i]) cout<<i<<"\n";

	cout<<"\n";




}










}



	
