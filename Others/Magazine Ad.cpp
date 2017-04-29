#include <bits/stdc++.h>
using namespace std;

long long len[1000005];

int ptr=0,width=INT_MAX;

int findLines(int w){

	int lines=0,current=len[0],i;

	len[ptr]=INT_MAX;

	if(current>w) return -1;

	for(i=1;i<=ptr;++i){

		if(len[i]>w && i!=ptr) return -1;

		if(current+len[i]<w) current+=len[i];

		else if(current+len[i]==w){

			++lines;

			current=0;
		}

		else{

			if(current!=0)++lines;

			current=len[i];
		}

	}

	return lines;

}

int main(){

	int k,i,ctr=0;

	string s;

	cin>>k;

	getchar();

	getline(cin,s);

	for(i=0;i<s.size();++i){

		if(s[i]==' '|| s[i]=='-') len[ptr++]=++ctr,ctr=0;

		else ++ctr;
	}

	len[ptr++]=ctr;

	int l=1,r=s.size(),w,lines;

	while(l<=r){

		w=(l+r)>>1;

		lines=findLines(w);

		

		if(lines>k || lines==-1) l=w+1; 

		else{

			r=w-1;

			width=min(w,width);
		}

		
	}

	cout<<width<<"\n";

	

}