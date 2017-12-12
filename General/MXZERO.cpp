#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,count1=0,temp;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==1) count1++;
        }
    
            if(count1%2==0)cout<<n-count1<<endl;
            else cout<<count1<<endl;
    
    }
    return 0;
} 
