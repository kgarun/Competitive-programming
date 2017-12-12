/*
ID:kgarun51
PROG:
LANG:c++
*/
 
#include<bits/stdc++.h>
using namespace std;
 
ifstream f("input.txt");
ofstream g("output.txt");
 
#define ll long long int
#define llu uint64_t
 
ll n,t;
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
 
  int i,j,k;
 
  cin>>t;
  
  while(t--){
    
    int a,b;
 
    bool f[100001];
 
    memset(f,0,sizeof(f));
 
    cin>>n>>a>>b;
 
    vector<int> v(n);
 
    for(i=0;i<n;++i) cin>>v[i];
 
    f[0]=1;
 
    for(i=a;i<=100000;i+=a) f[i]=1;
 
    for(i=b;i<=100000;i+=b) f[i]=1;
 
    int flag=0;
 
    for(int i=0;i<n;++i){
 
        if(v[i]%a==0 || v[i]%b==0 ) ++flag;
 
        else{
 
          for(j=0;j<=v[i];++j) {
 
            if(f[j]==1 && f[v[i]-j]==1) {++flag;break;}
 
 
 
          }
 
 
 
 
 
        }
 
    }
 
    cout<<flag<<" "<<n-flag<<"\n";
 
 
 
    
  
  
  
  
  
  }
 
 
  return 0;
} 
