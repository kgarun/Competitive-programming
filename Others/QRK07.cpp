#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long n,t,x;
        cin>>n;
        cin>>x;
        for(long i=1;i<n;i++){
            cin>>t;
            x=x^t;
        }
        t=x/2;
        if(t*2==x) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
} 
