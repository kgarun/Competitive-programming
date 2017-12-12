#include<bits/stdc++.h>
 
using namespace std;
 
bool a[1005];
 
int main(){
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
    int t,n,m,i,temp;
 
    vector<int> chef,ass;
 
    cin>>t;
 
    while(t--){
 
            cin>>n>>m;
 
            n+=1;
 
            for(i=1;i<n;++i) a[i]=0;
 
            for(i=0;i<m;++i){
 
                cin>>temp;
 
                a[temp]=1;
 
            }
 
            temp=1;
 
            for(i=1;i<n;++i){
 
                    if(a[i]==0){
 
                            if(temp&1) {
 
                                    chef.push_back(i);
 
                                    ++temp;
 
                            }
 
 
                            else {
                                    ass.push_back(i);
 
                                    ++temp;
 
                            }
 
                }
 
 
            }
 
            for(vector<int>::iterator ptr=chef.begin();ptr!=chef.end();++ptr) cout<<*ptr<<" ";
 
            cout<<"\n";
 
            for(vector<int>::iterator ptr=ass.begin();ptr!=ass.end();++ptr) cout<<*ptr<<" ";
 
 
            cout<<"\n";
 
            chef.clear();
 
            ass.clear();
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
