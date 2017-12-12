#include<stdio.h>
 
 
int sumofn(int n){ return (n*(n+1))/2;}
 
int main(){
 
	int t;
 
	scanf("%d",&t);
 
	while(t--){
 
		int d,n,i;
 
		scanf("%d%d",&d,&n);
 
		for(i=0;i<d;++i) n=sumofn(n);
 
		printf("%d\n",n);
 
	}
 
	return 0;
 
} 
