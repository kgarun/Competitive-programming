#include<bits/stdc++.h>
int main(){
    bool primes[100001]={0};
    primes[0]=primes[0]=1;
    int maxsqrt=sqrt(100000),t;
    for(int i=2;i<=maxsqrt;i++ ){
        if(primes[i]==0){
            for(int j=i*2;j<=100000;j+=i) primes[j]=1;
        }
    }
    scanf("%d",&t);
    while(t--){
        int r,s;
         scanf("%d%d",&r,&s);
         while(r!=s){
 
             r++;
             if(r==s) break;
             else if(primes[r]==0) s++;
             else s--;
             
 
         }
         printf("%d\n",r);
         
 
    }
    return 0;
 
 
} 
