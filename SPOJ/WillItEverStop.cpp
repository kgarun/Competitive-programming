
#include<bits/stdc++.h>
using namespace std;

#define INT(x)  (x-'0')
#define CHAR(x) (x+'0')

void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }

//bool equal(double x,double y){ 	return fabs(x-y)<EPSILON; }


int main(){

  syncOff();

  uint64_t t,i,j,k=0;

  cin>>t;

  while(t>0){

  	if(t&1) ++k;

  	t>>=1;

  }

  if(k==1) cout<<"TAK";

  else cout<<"NIE";


	

	return 0;

}


