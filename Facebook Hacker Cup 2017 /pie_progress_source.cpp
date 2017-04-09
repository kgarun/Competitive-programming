/*
ID:kgarun51
PROG:
LANG:c++
*/

#include<bits/stdc++.h>
using namespace std;

ifstream f("pie_progress.txt");
ofstream g("pie_progress.out");

#define ll long long int
#define llu uint64_t

ll t,cnt=0;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll i,j,k;

	f>>t;
	
	while(t--){

		ll n,m,temp,total=0;

		f>>n>>m;

		vector< vector<ll> > cost(n);

		vector<ll> pos(n,0);

		for(i=0;i<n;++i)
			for(j=0;j<m;++j){

				f>>temp;

				cost[i].push_back(temp);

			}

		temp=0;

		

		for(i=0;i<n;++i){

			sort(cost[i].begin(),cost[i].end());


		}

		ll temp1=0,temp2=INT_MAX,index=0;

		for(i=0;i<n;++i){

			for(j=i;j>=-1;--j){

				if(j>=0){

				if(pos[j]<m){			

						temp1=total+cost[j][pos[j]]-((ll)pow(pos[j],2))+(ll)pow(pos[j]+1,2);

						}

				}

				if(temp1<temp2) {index=j;temp2=temp1;}


			}

			//g<<temp1<<" "<<temp2<<" "<<index<<" "<<total<<"\n";

			total=temp2;

			++pos[index];

			temp2=INT_MAX;

			temp1=0;

			//g<<pos[index]<<" "<<total<<"\n";

		}

		g<<"Case #"<<++cnt<<": "<<total<<"\n";
	
	
	
	
	}

	return 0;
		}
