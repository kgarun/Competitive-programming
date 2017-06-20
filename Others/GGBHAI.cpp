#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
vector< vector<pair<int,int> > > graph;
vector<int> visited;
vector<int> dist;
 
void Dijkstra(int source,int n)//n is the no. of vertices;
{
    for(int i=1;i<=n;i++)// Initially setting shortest distance of each vertex from the source vertex to be infinity
        dist[i]=INT_MAX;
 
    dist[source]=0;
 
    priority_queue<pair<int,int>, vector<pair<int,int> >,std::greater<pair<int,int> > >p;
    p.push(make_pair(0,source));
 
    while(p.empty()==false)
    {
        pair<int,int> current = p.top();
        p.pop();
        int cv=current.second;//current vertex which has been extracted out from min heap
        int cw=current.first;//current min dist till this vertex from the source
 
        if(visited[cv]==1)//if the node is already visited then continue;
            continue;
 
        visited[cv]=1;//mark the node as visited
 
        for(vector<pair<int,int> >::iterator itr=graph[cv].begin();itr!=graph[cv].end();itr++)
        {
             if(visited[itr->second]==0&&dist[itr->second]>cw+itr->first)
             { dist[itr->second]=cw+itr->first;
             p.push(make_pair(dist[itr->second],itr->second));
 
             }
 
        }
 
    }
 
 
 
}
 
int main()
 
{
 
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
 
  int t;
 
  cin>>t;
 
  while(t--){
    int n,m,w=1;
 
    cin>>n>>m;
 
  graph = vector <vector<pair<int, int> > > (n+1);
  visited = vector<int> (n+1,0);
 
  dist=vector<int> (n+1);
 
  for(int i=1;i<=n-1;i++)
  {
      int u,v;
      cin>>u>>v;
      graph[u].push_back(make_pair(w,v));
      graph[v].push_back(make_pair(w,u));
  }
  int source=1;
 
  vector<int> b(m);
 
  for(int i=0;i<m;++i) cin>>b[i];
 
 
 
  Dijkstra(source,n);
 
double p=0;
 
  for(int i=0;i<m;i++){
 
    p+=((2*dist[b[i]])/(double)m);
 
 
  
  }
 
  cout<<setprecision(6)<<fixed<<p<<"\n";
 
 }
 
 
    return 0;
} 
