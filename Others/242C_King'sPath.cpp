

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

set< pair<ll,ll> > points;

map< pair<ll,ll>,bool> visited;

map< pair<ll,ll> ,ll > cost;

ll bfs(pair<ll,ll> source,pair<ll,ll> dest){

	visited[source]=true;

	queue< pair<ll,ll> > q;

	q.push(source);

	ll x,y;

	int dx[]={-1,1,0,0,-1,-1,1,1},dy[]={0,0,-1,1,-1,1,-1,1};


	while(q.size()){

		pair<ll,ll> current=q.front();

		q.pop();

		for(int i=0;i<8;++i){

			x=current.first+dx[i],y=current.second+dy[i];

			pair<ll,ll> next={x,y};

			if(!(points.find(next)==points.end() || visited[next]==1)){

				cost[next]=cost[current]+1;

				//cout<<next.first<<" "<<next.second<<"\n";

				visited[next]=1;

				q.push(next);

				if(next==dest) return cost[next];


			}


		}

	}


		return -1;


}

		
		

int main(){

  ios_base::sync_with_stdio(0); cin.tie(NULL);
 
  ll x0,y0,x1,y1,n, r,a,b,i;

  cin>>x0>>y0>>x1>>y1;

  cin>>n;

  while(n--){

  	cin>>r>>a>>b;

  	for(i=a;i<=b;++i) points.insert({r,i});

  }

 cout<<  bfs({x0,y0},{x1,y1}) <<"\n";  

  return 0;

}







