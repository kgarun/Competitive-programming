
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct cmp{

	bool operator() (pair<ll,ll> x,pair<ll,ll> y){

		if(x.second-x.first+1 < y.second-y.first+1) return 1;

		else if(x.second-x.first+1 > y.second-y.first+1) return 0;

		else{ return x.first < y.first; 	}

	}


};

int main(){

ios_base::sync_with_stdio(0);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t,T;

cin>>t;

++t;

for(T=1;T<t;++T){

	ll n,k,mid,i;

	priority_queue< pair<ll,ll> , vector< pair<ll,ll> > , cmp > q;

	cin>>n>>k;

	q.push({1,n});

	pair<ll,ll> current;

	for(i=0;i<k;++i){

		current=q.top();
		
		q.pop();

		mid=(current.first+current.second)/2;

		q.push({current.first,mid-1});

		q.push({mid+1,current.second});

	}

	ll mx=max(current.second-mid,mid-current.first);

	ll mi=min(current.second-mid,mid-current.first);

	cout<<"Case #"<<T<<": "<<mx<<" "<<mi<<"\n";

  }

}