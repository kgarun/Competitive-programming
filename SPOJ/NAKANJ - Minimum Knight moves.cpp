

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

map< pair<ll,ll>,ll> cost;

ll bfs(pair<ll,ll> source,pair<ll,ll> dest){

	for(int i=1;i<=8;++i) for(int j=1;j<=8;++j) cost[make_pair(i,j)]=-1;

	cost[source]=0;

	queue< pair<ll,ll> > q;

	q.push(source);

	ll x,y;

	int dx[]={-1,-1,-2,-2,2,2,1,1},
		dy[]={-2,2,-1,1,-1,1,-2,2};


	while(q.size()){

		pair<ll,ll> current=q.front();

		if(current==dest) return cost[current];

		q.pop();

		for(int i=0;i<8;++i){

			x=current.first+dx[i],y=current.second+dy[i];

			if(x>8 || x<1 || y>8 || y<1) continue;

			pair<ll,ll> next={x,y};

			if(cost[next]==-1){

				cost[next]=cost[current]+1;

				q.push(next);


			}


		}

	}


}
	
		

int main(){

  ios_base::sync_with_stdio(0); cin.tie(NULL);
 
  

	ll t;

	cin>>t;

	while(t--){

		string source,dest;

		cin>>source>>dest;

		ll x0=string("0abcdefgh").find(source[0]),y0=string("012345678").find(source[1]), x1=string("0abcdefgh").find(dest[0]),y1=string("012345678").find(dest[1]);

 		
 		cout<<  bfs({x0,y0},{x1,y1}) <<"\n"; 

 		

	}

  return 0;
}







