#include<bits/stdc++.h>
using namespace std;

int MIN(int x,int y,int z){ return min(min(x,y),z); }

int compute(string s,string d){

	int p[d.size()+1][s.size()+1],i,j;

	for(i=0;i<=d.size();++i)   for(j=0;j<=s.size();++j)  p[i][j]=0;

	for(i=0;i<=d.size();++i){

		for(j=0;j<=s.size();++j){

			if(i==0) p[i][j]=j;

			else if(j==0) p[i][j]=i;

			else{

				if(d[i-1]==s[j-1]) p[i][j]=p[i-1][j-1];

				else{

					p[i][j]=MIN(p[i-1][j-1],p[i-1][j],p[i][j-1])+1;
				}
			}

		}

	}

	return p[d.size()][s.size()];
}


int main(){

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	int t;

	cin>>t;

	while(t--){

		string s,d;

		int k;

		cin>>s>>d;

		cout<<compute(s,d)<<"\n";

	}

	return 0;

}
