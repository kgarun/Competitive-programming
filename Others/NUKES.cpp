/*
ID: kgarun51
PROG:
LANG: C++
*/
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
ifstream f("data.in");
 
ofstream g("data.out");
 
 
 
int main(){
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
	ll num,base,cap=0,i;
 
	cin>>num>>base>>cap;
 
	++base;
 
	for(i=0;i<cap;++i){
 
            cout<<num%base<<" ";
 
            num/=base;
 
 
 
	}
 
 
 
	/*while(ans.size()!=0) {
 
        cout<<ans.front()<<" ";
 
        ans.pop_front();
 
        --cap;

    }
 
    for(list<ll>::iterator val=ans.begin();val!=ans.end();++val){
 
        cout<<*val<<" ";
 
        --cap;
    }
 
    //cout<<cap;
 
    while(cap>0) {
 
        cout<<0<<" ";

        --cap;
    }
 
*/
 
 
 
    return 0;
}
 
