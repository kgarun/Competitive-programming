#include<bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while(1){

		long long t,i,j,k=0;

		cin>>t;

		if(!t) break;

		string s,ans;

		cin>>s;

		vector< vector<char> > v(s.size()/t);

		for(i=0;i<s.size()/t;++i) v[i].resize(t,'-');

		for(i=0;i<s.size()/t;++i){
			if((i+1)%2==1){
			for(j=0;j<t;++j){
				v[i][j]=s[k++];

		        }
			}
			else{
			for(j=t-1;j>=0;--j) v[i][j]=s[k++];
			}
		}
		for(j=0;j<t;++j)
			for(i=0;i<s.size()/t;++i)
				if(v[i][j]!='-') cout<<v[i][j];

		//for(i=0;i<s.size()/t;++i){ for(j=0;j<t;++j) cout<<v[i][j]<<" "; cout<<"\n";}

		cout<<"\n";

	}

return 0;

}

