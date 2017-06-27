
#include <bits/stdc++.h>
using namespace std;


unordered_map< string , set<string> > TREE;

unordered_map< string ,int > val;

struct cmp{

	bool operator()(pair<int,string> a,pair<int,string> b){

		if(a.first>b.first) return 1;

		if(a.first<b.first) return 0;

		return a.second<b.second;


	}

};



int recurFind(string node,int height){

	int cnt=0;

	if(height>=1){		

		for(auto child:TREE[node]){

				if(height==1) cnt+=1;

				cnt+=recurFind(child,height-1);	

		}

	}

	return cnt;
	
}




int main(){

ios_base::sync_with_stdio(0);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int T,cnt=0;

cin>>T;

while(T--){

	cout<<"Tree "<< ++cnt <<":\n";

	TREE.clear();

	val.clear();

	set<string> members;

	string s,t;

	int m,n,d;

	cin>>n>>d;

	while(n--){

		cin>>s>>m;

		members.insert(s);

		while(m--){

			cin>>t;

			TREE[s].insert(t);

			members.insert(t);

			
		}

	}

	for(auto member:members)	val[member]+=recurFind(member,d);


	set< pair < int,string > , cmp > ans;
	

	for(auto member:members){

		if(val[member]>0) ans.insert({val[member],member});

	}


	int prev=-1,sofar=0;

	for(auto ptr:ans) {

		if(ptr.first==prev)	cout<<ptr.second<<" "<<ptr.first<<"\n";

		else if(sofar>=3) break;

		else  cout<<ptr.second<<" "<<ptr.first<<"\n",prev=ptr.first;

		++sofar;
		

	}

	
cout<<"\n";

}



}



	