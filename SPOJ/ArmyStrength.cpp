#include <bits/stdc++.h>
using namespace std;


int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  
  int t;

  cin>>t;

  while(t--){

    int m,n,i,temp;

    cin>>n>>m;

    priority_queue< int,vector<int>,greater<int> > g,mg;

    for(i=0;i<n;++i){

      cin>>temp;

      g.push(temp);

    }


    for(i=0;i<m;++i){

      cin>>temp;

      mg.push(temp);

    }

    while(g.size()!=0 && mg.size()!=0){

      if(mg.top()>g.top()) g.pop();

      else mg.pop();

    }

    if(g.size()) cout<<"Godzilla\n";

    else cout<<"MechaGodzilla\n";
   
  }

}