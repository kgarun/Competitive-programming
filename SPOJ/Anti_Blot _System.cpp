

#include<bits/stdc++.h>
using namespace std;

#define INT(x)  (x-'0')
#define CHAR(x) (x+'0')

void syncOff(){ ios_base::sync_with_stdio(0); cin.tie(NULL); }


bool equal(double x,double y){  return fabs(x-y)<numeric_limits<double>::epsilon(); }

int to_int(char s[50]){

	int val=0;

	for(int i=0;s[i];++i) val=(val*10)+(INT(s[i]));

	return val;


}


int main(){

  //syncOff();

  uint64_t t,i,j,k;

  cin>>t;
 
  while(t--){

  	char x[50],y[50],z[50];

  	int a=0,b=0,c=0;

  	int flag=0;

  	scanf("%s + %s = %s",x,y,z);

  	//cout<<to_int(x)<<" "<<to_int(y)<<" "<<to_int(z)<<"\n";

  	for(i=0;x[i];++i) if(x[i]=='m') flag=1;

  	for(i=0;y[i];++i) if(y[i]=='m') flag=2;

  	//cout<<flag<<"\n";

  	if(flag==1){

  		b=to_int(y);

  		c=to_int(z);

  		a=c-b;

  	}

  	else if(flag==2){

  		a=to_int(x);

  		c=to_int(z);

  		b=c-a;




  	}

  	else{

  		a=to_int(x);

  		b=to_int(y);

  		c=a+b;




  	}

  	printf("%d + %d = %d\n",a,b,c);


  }

  

  return 0;

}




