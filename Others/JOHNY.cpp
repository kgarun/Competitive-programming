#include<iostream>
#define ll long long
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t,n,k;
vector<ll> a;
cin>>t;
while(t--){
cin>>n;
a.resize(n);
for(int i=0;i<n;i++) cin>>a[i];
cin>>k;
ll key=a[k-1];
sort(a.begin(),a.end());
int s=0,e=n-1,m;
while(s<=e){
m=(s+e)/2;
if(a[m]==key) {cout<<m+1<<endl; break;}
else if(a[m]>key) e=m-1;
else s=m+1;
}
}
return 0;
} 
