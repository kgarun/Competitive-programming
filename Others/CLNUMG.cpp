#include<bits/stdc++.h>
using namespace std;
 
long long toNum(string s){
 
	long long val=0;
 
	for(long long i=0,j=s.size()-1;i<s.size();++i,--j){
 
		if(s[j]=='1') val+=pow(2,i);
 
 
	}
 
 
	return val;
 
}
 
int main(){
 
	
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
 
	long long t;
 
	cin>>t;
 
	while(t--){
 
		long long one,zero;
 
		cin>>one>>zero;
 
		string s;
 
		s+='1';
 
		--one;
 
		while(zero>0){
 
			s+='0';
 
			--zero;
 
		}
 
		while(one>0){
 
			s+='1';
 
			--one;
 
		}
 
		cout<<toNum(s)<<"\n";
 
		
 
 
	}
 
	
 
	
	
 
return 0;
 
 
 
} 
