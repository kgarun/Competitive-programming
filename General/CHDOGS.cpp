#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s,v;
        cin>>s>>v;
        printf("%0.9lf\n",((2*s)/(double)(3*v)));
    }
    return 0;
}
 
