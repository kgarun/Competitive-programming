#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#define ll long long
using namespace std;
ll a[3];
ll findmin(ll x,ll y,ll z){
    a[0]=x,a[1]=y,a[2]=z;
    ll min=10000000000;
    for(int i=0;i<3;i++){
        if((min<a[i])&&(a[i]%2!=0))
              min=a[i];
    }
    if((min!=10000000000)&&(min!=-1)) return min;
    else return 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll r[3],y[3],g[3],s[6]={0};
        for(int i=0;i<3;i++) {
            cin>>g[i]>>y[i]>>r[i];
            s[i]+=(g[i]+y[i]+r[i]);
            }
        s[3]=g[0]+g[1]+g[2];
        s[4]=y[0]+y[1]+y[2];
        s[5]=r[0]+r[1]+r[2];
       ll max=-1,min;
        ll pos;
        check:
        max=-1;
        for(int j=0;j<6;j++){
            if(s[j]>max) {pos=j;max=s[j];}
        }
        if((s[pos]%2!=0)&&(s[pos]!=-1)) cout<<s[pos]<<endl;
        else if(s[pos]==0) cout<<0<<endl;
        else cout<<s[pos]-1<<endl;
        /*
        else{
            switch(pos){
                case 0:
                case 1:
                case 2:
                    {
                      min=findmin(y[pos],g[pos],r[pos]);
                      if(min!=0) {
                      s[pos]-=min;
                      }
                      else{
                          s[pos]=-1;
                      }
                      goto check;
                      break;
                    }
                case 3:
                {
                    min=findmin(g[0],g[1],g[2]);
                      if(min!=0) {
                      s[pos]-=min;
                      }
                      else{
                          s[pos]=-1;
                      }
                      goto check;
                      break;
                    }
                    
                
                case 4:
                {
                    min=findmin(y[0],y[1],y[2]);
                      if(min!=0) {
                      s[pos]-=min;
                      }
                      else{
                          s[pos]=-1;
                      }
                      goto check;
                      break;
                    }
                    case 5:
                {
                    min=findmin(r[0],r[1],r[2]);
                      if(min!=0) {
                      s[pos]-=min;
                      }
                      else{
                          s[pos]=-1;
                      }
                      goto check;
                      break;
                    }
        } */
                    
                
                    
                } return 0;
            }
        
