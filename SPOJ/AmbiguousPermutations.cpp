#include <bits/stdc++.h>
using namespace std;


int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  while(1){

    int n,i,j;

    unordered_map<int,int> position;

    cin>>n;

    vector<int> v(n),ans(n);

    if(!n) break;

    for(i=0;i<n;++i){

      cin>>v[i];

      position[v[i]]=i+1;


    }

    for(i=1;i<=n;++i){

      ans[i-1]=position[i];
    }

    bool flag=0; 

    for(i=0;i<n;++i) if(ans[i]!=v[i]) {flag=1;break;}

    if(flag) cout<<"not ambiguous\n";

    else cout<<"ambiguous\n";


  }

}