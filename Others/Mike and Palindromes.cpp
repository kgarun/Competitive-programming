
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool invalid(string s,string t){

	if(s.size()!=t.size()) return 1;

	map<char,int> smap;

	for(auto c:s) ++smap[c];

	for(auto c:t) {

		if(smap[c]>=1) --smap[c];

		else return 1;

	}

	return 0;
}

int comp(string s,string t){

	int i,len=s.size(),j;

	string temp;


	for(i=0;i<len;++i){

		if(s[0]==t[i]){

			temp.clear();

			temp+=s[0];

			j=i+1;

			while(temp.size()!=len){

				j%=len;

				temp+=(t[j]);

				++j;

			}

			if(temp==s) return i;

		}

	}

	return -1;

}


int main(){

ios_base::sync_with_stdio(0);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;

cin>>n;

bool f=0;

int cnt=INT_MAX,temp=0,i,j,k,l,x;

vector< string > v(n);

string t;

for(i=0;i<n;++i) cin>>v[i];

for(i=0;i<n;++i){

	temp=0;

	for(j=0;j<n;++j){

		if(i==j || v[i]==v[j]) continue;

		else if(invalid(v[i],v[j])) {f=1;break;}

		else {

			int val=comp(v[i],v[j]);

			if(val==-1) f=1;

			else temp+=val;

		}


	}

	if(!f)cnt=min(cnt,temp);



}

if(!f)cout<<cnt;

else cout<<-1;












}



	