#include<stdio.h>
int main(){
    char s[1000000],c;
    int count[26];
    long n,q,t,x,y,i,z;
    scanf("%d%d%s",&n,&q,&s);
    while(q--){
        scanf("%d",&t);
        if(t==1){
            scanf("%d %c",&x,&c);
            s[x-1]=c;
        }
        else if(t==2){
            z=0;
            scanf("%d %d",&x,&y);
            for(i=0;i<26;i++) count[i]=0;
            for(i=x-1;i<y;i++){
                t=(int)(s[i]-97);
                count[t]++;
            }
             for(i=0;i<26;i++) {
                 if(count[i]%2==1) z++;
                 if(z>1) break;
 
            }
            if(z<=1) printf("yes\n");
            else printf("no\n");
    }
 
}
return 0;
} 
