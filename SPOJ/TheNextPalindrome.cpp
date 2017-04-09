

#include<bits/stdc++.h>
using namespace std;


void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }


bool equal(double x,double y){  return fabs(x-y)<numeric_limits<double>::epsilon(); }

int increment(vector<int> &v, int n){

	bool carry=1;

	while(n>=0){

		if(v[n]+1>9) {carry=1; v[n]=0;}

		else {carry=0;	++v[n];	}

		if(!carry) return n;

		--n;

	}

if(carry==1) return -1;

}


int main(){

  syncOff();

  uint64_t t,i,j,k;

  cin>>t;
 
  while(t--){

    string s;

    cin>>s;

    k=0;

    std::vector<int> v(s.size());

    for(i=0;i<s.size();++i) v[i]=s[i]-'0';

    bool overflow=0;

    int flag=increment(v,s.size()-1);

    if(flag==-1) overflow=1;

	i=0,j=s.size()-1;

	unordered_map<int,int> mappos;

	

	while(i<j && overflow==0){

		mappos[i]=j;

		if(v[i]>v[j]) v[j]=v[i];

		else if(v[j]>v[i]){

			v[j]=v[i];

			flag=increment(v,j-1);

			if(flag==-1) {overflow=1;break;}

			else if(flag<=i){

				i=flag;

				j=mappos[i];

				continue;

			}


		}
			++i;

			--j;


//cout<<"iter :"<<k++<<" ";

//for(auto ptr:v) cout<<ptr<<" ";

//cout<<"\n";


	}

	if(overflow) {

		cout<<1;

		for(i=0;i<s.size()-1;++i) cout<<0;

		cout<<1;

	}

	else for(auto ptr:v) cout<<ptr;

	cout<<"\n";
    

  }

  

  return 0;

}




