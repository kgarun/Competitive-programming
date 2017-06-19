#include<bits/stdc++.h>
bool a[10000001];
int main(){
long n,x,y,t;
std::cin>>n>>x>>y;
if(x>y) std::swap(x,y);
a[x]=1;
a[y]=1;
a[x+y]=1;
t=x;
for(long i=x+y;i<=n;i++){
 
        if(a[i]==1){
            for(long k=t;k<=n;k++) if(a[k]==1) {t=k; break;}
            for(long j=x+y;j<=n;j+=t) a[j]=1;
            t++;
        }
        }
for(long i=x;i<=n;i++) if(a[i]==1)printf("%ld ",i);
return 0;
 
}
 
 
