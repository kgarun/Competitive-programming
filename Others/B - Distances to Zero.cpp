#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[200005];

int dist[200005];


int main(){

ios_base::sync_with_stdio(0);
cin.tie(NULL);



int n,i;

memset(dist,1000000,sizeof(dist));

cin>>n;

for(i=0;i<n;++i) cin>>a[i];

int cntr=1000000;

for(i=0;i<n;++i){

	if(a[i]==0) cntr=0;

	else dist[i]=min(dist[i],++cntr);

}

for(i=n-1;i>=0;--i){

	if(a[i]==0) cntr=0;

	else dist[i]=min(dist[i],++cntr);

}


for(i=0;i<n;++i) {

	if(a[i]==0) cout<<0<<" ";

	else cout<<dist[i]<<" ";


}
	

}