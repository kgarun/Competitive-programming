#include<stdio.h>

main()
{

int a,b,c,t;

scanf("%d",&t);

do
{
scanf("%d%d",&a,&b);

c=a+b;

printf("%d\n",c);

t=t-1;

}while(t>0);



}