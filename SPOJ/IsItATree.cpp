#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector< vector<int> > adjList;


bool check(){

    visited[1]=true;

    list<int> q;

    q.push_back(1);

    while(q.size()){

        int source=q.front();

        q.pop_front();

        for(auto child:adjList[source]){

            if(visited[child]) return 1;

            else{

                q.push_back(child);

                visited[child]=1;

            }

        }

    }

return 0;

}

int main(){

    int n,e,i,u,v;

    bool flag=0;

    cin>>n>>e;

    adjList.resize(n+1);
    visited.resize(n+1,0);

    for(i=0;i<e;++i){

        cin>>u>>v;

        if(u>v) swap(u,v);

        adjList[u].push_back(v);

    }

    flag=check();

    for(i=1;i<=n;++i) if(!visited[i]) flag=1;

    if(flag || n!=e+1) cout<<"NO\n";
    else cout<<"YES\n";


}