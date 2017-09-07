#include <bits/stdc++.h>
using namespace std;

int main(void){

        int a,b,c=0,d=0;
        cin >> a >> b;

        while(a){
            c = c*10 + (a%10);
            a/=10;
        }

        while(b){
            d = d*10 + (b%10);
            b/=10;
        }

        cout << max(c,d) <<'\n';


}
