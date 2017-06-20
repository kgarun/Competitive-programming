#include<bits/stdc++.h>
using namespace std;
 
 
long long int n,t;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	cin>>t;
 
	string s;
 
	int h,v,f=-1,c=-1;
 
	while(t--){
 
		
 
		h=v=1;
 
		bool marked=0;
 
		f=-1;
 
		cin>>n;
 
		for(int j=0;j<n;++j){
 
			cin>>s;
 
			
 
			int z=s.size()-1,y=z-1,x=y-1;
 
			if(s[x]=='m' && s[y]=='a' && s[z] =='n') ++h;
 
			else ++v;
 
		//	cout<<h<<" "<<v<<"\n";
 
			if(!marked && h==v+2){
				f=1;
				marked=1;
			}
			if(!marked && h+3==v){
				f=0;
				marked=1;
			}
 
			
 
			
 
 
 
 
 
 
		}
 
 
		if(f==1) cout<<"superheroes\n";
 
		else if(f==0) cout<<"villains\n";
 
		else cout<<"draw\n";
 
	
 
 
 
 
 
	}
 
 
 
 
 
} 
