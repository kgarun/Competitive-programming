 
#include<iostream>
using namespace std;
int main(){
long a,b;
cin>>a>>b;
long diff=a-b;
(diff%10==9)?cout<<diff-1:cout<<diff+1;
return 0;
} 
