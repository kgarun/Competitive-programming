#include <bits/stdc++.h>
using namespace std;
 
 
typedef unsigned long long ull;
 
bool ARRAY[2501][2501]; 
 
unordered_map<int,int> sizeval;
 
unsigned int popcount64(ull x){
 
    x = (x & 0x5555555555555555ULL) + ((x >> 1) & 0x5555555555555555ULL);
    x = (x & 0x3333333333333333ULL) + ((x >> 2) & 0x3333333333333333ULL);
    x = (x & 0x0F0F0F0F0F0F0F0FULL) + ((x >> 4) & 0x0F0F0F0F0F0F0F0FULL);
    return (x * 0x0101010101010101ULL) >> 56;
}
  
 
struct cont{
 
	ull val[42];
	
 
	void insert(ull x){
 
		val[x/62]|=((ull)1<<(x%62));
 
	}	
 
};
 
inline int COUNT(cont x){
 
	int tempcounter=0;
 
	for(int i=0;i<42;++i) tempcounter+=popcount64(x.val[i]);
 
	return tempcounter;
}
 
inline cont bitwiseand (cont x,cont y){
 
	cont temp;	
 
	for(int i=0;i<42;++i){
 
		temp.val[i]=x.val[i]&y.val[i];
 
	}
 
	return temp; 
 
 
}
 
inline bool check (cont x,cont y,ull k){
 
	ull temp,ans=0;
 
	for(int i=0;i<42;++i){
 
		temp=x.val[i]|y.val[i];
 
		ans+=popcount64(temp);
 
	}
 
	return k==ans; 
 
 
}
 
 
 
 
 
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
	int t;
 
	cin>>t;
 
	while(t--){
 
		memset(ARRAY,0,sizeof(ARRAY));
 
		int n,k,m,var,ans=0;
 
		vector<int> values;
 
		double dense=0;
 
		cin>>n>>k;
 
		vector< cont > a(k+1),b(n);
 
		for(int i=0;i<n;++i){
 
			cin>>m;
 
			int tempctr=0;
 
			for(int j=0;j<m;++j){
 
				cin>>var;
 
				if(!ARRAY[i][var]){
 
					ARRAY[i][var]=1;
 
					a[var].insert(i);
 
					++tempctr;
 
					b[i].insert(var);
 
				}
 
			}
 
			sizeval[i]=tempctr;
 
			values.emplace_back(tempctr);
 
		}
 
		sort(values.begin(),values.end());
 
		for(int i=0;i<n;++i){
 
			auto ptr=lower_bound(values.begin(),values.end(),k-sizeval[i]);
 
			if(ptr==values.end()) continue;
 
			dense+=(n-distance(values.begin(),ptr));
 
 
		}
 
		if((dense/n) > (0.50*n)){
 
 
		for(int i=0;i<n;++i){
 
			bool flag=0;
 
			cont prev;
 
			for(int j=1;j<=k;++j){
 
				if(!ARRAY[i][j]){
 
					if(flag==0) {
 
						prev=a[j];
 
						flag=1;
 
					}
 
					else{
 
						prev=bitwiseand(prev,a[j]);
					}
 
				}
 
			}
 
			if(flag==0) ans+=n-1;
 
			else ans+=COUNT(prev); 
			
		}	
 
			
 
		cout<<ans/2<<"\n";
 
	
 
	}
 
else{
 
	for(int i=0;i<n;++i){
 
			for(int j=i+1;j<n;++j){
 
				if(sizeval[i]+sizeval[j]>=k &&   check(b[i],b[j],k)) ++ans;
 
 
			}
 
		}	
 
			
 
		cout<<ans<<"\n";
 
	}
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
}    
