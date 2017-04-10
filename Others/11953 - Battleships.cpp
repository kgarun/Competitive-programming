#include<bits/stdc++.h>
using namespace std;

char a[105][105];

bool visited[105][105];

void dfs(int i,int j,int n){

	if(i>=0 && j>=0 && i<n && j<n && a[i][j]!='.'&&visited[i][j]==0){

		visited[i][j]=1;

		cout<<i<<" "<<j<<"\n";

		dfs(i-1,j,n);

		dfs(i+1,j,n);

		dfs(i,j-1,n);

		dfs(i,j+1,n);

	}

}


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t,n,i,ships,j;

	cin>>t;

	for(int c=1;c<=t;++c){

		ships=0;

		cin>>n;

		for(i=0;i<n;++i) for(j=0;j<n;++j) {	cin>>a[i][j];visited[i][j]=0;	}

		for(i=0;i<n;++i) for(j=0;j<n;++j){

			if(visited[i][j]==0 && a[i][j]=='x'){

			    dfs(i,j,n);

				++ships;

			}
		}

		cout<<"Case "<<c<<": "<<ships<<"\n";

	}

}