#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > adjList;

vector<bool> visited;

pair<int,int> maxNode;

void dfs(int source,int cost){

	visited[source]=true;

	if(cost>maxNode.second){

		maxNode.first=source;
		maxNode.second=cost;

	}

	for(auto child:adjList[source]){

		if(!visited[child]) dfs(child,cost+1);


	}


}




int main(){

	int n,e,u,v,i;

	cin>>n;

	e=n-1;// Tree

	adjList.resize(n+1);

	for(i=0;i<e;++i){

		cin>>u>>v;

		adjList[u].push_back(v);
		adjList[v].push_back(u);


	}

	visited.resize(n+1,0);

	dfs(1,0);

	visited.clear();

	visited.resize(n+1,0);

	dfs(maxNode.first,0);

	//cout<<"\nMax Node:"<<maxNode.first<<"Cost:"<<maxNode.second<<"\n";

	cout<<maxNode.second<<"\n";

}
