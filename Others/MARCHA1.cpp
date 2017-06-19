#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t,n,i,sum,a[22],j,tempi,tempj;
 
    cin>>t;
 
    while(t--){
 
        bool cost[22][20005];
 
        cin>>n>>sum;
 
        for(i=0;i<n;++i)
        for(j=0;j<=sum;++j) {
                if(j) cost[i][j]=0;
                else cost[i][j]=1;
        }
 
        for(i=0;i<n;++i) cin>>a[i];
 
        for(i=0;i<n;++i)
        for(j=1;j<=sum;++j){
 
            tempi=i-1;
 
            tempj=j-a[i];
 
            if( j<a[i] && tempi>=0 ) cost[i][j]=cost[tempi][j];
 
            else if(j==a[i]) cost[i][j]=1;
 
            else  if( j>a[i] && tempi>=0 ){
 
                if(cost[tempi][j]==1) cost[i][j]=1;
 
                else if(tempj>=0){
 
                        if(cost[tempi][tempj]==1) cost[i][j]=1;
 
 
                }
 
 
            }
 
        }
 
       /* for(i=0;i<n;++i){
                    for(j=0;j<=sum;++j)
                        cout<<cost[i][j]<<" ";
                    cout<<"\n";
                }
        */
                if(cost[n-1][sum]==1) cout<<"Yes\n";
                else cout<<"No\n";
 
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
 
 
}
  
