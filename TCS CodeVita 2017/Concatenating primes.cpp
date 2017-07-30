#include <bits/stdc++.h>
using namespace std;

bool primeVal[100000];

void sieve(){
	
	primeVal[0]=primeVal[1]=1;

	for(int i=2;i*i<=10000;++i){

		if(primeVal[i]==0){

			for(int j=i*i;j<=10000;j+=i) primeVal[j]=1;

		}



	}
	
	
	
	
}

int main(){
	
	sieve();


	int primes[20]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67,77};

	int n;

	set<int> ans;

	cin>>n;

	for(int i=0;primes[i]<=n;++i){

		

		for(int j=0;primes[j]<=n;++j){

			int val=primes[j];
			
			int temp=primes[i];

			if(val<10)  temp*=10,temp+=val;

			else temp*=100,temp+=val;
			
		//	cout<<temp<<'\n';

			if(primeVal[temp]==0) ans.insert(temp);

		}
		
}

		cout<<ans.size();



	}
	
	
	
	
	
	
	
	
	
	

