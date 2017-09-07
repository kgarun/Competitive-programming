#include <bits/stdc++.h>
using namespace std;

int main(void){

   // freopen ( "/home/arun/CP/input.txt", "r", stdin );

    string s;

    while(getline(cin,s)){

        for(char&c:s) c=(c>='A' && c<='Z')?('a'+c-'A'):c;

        if(s.find("problem")!=string::npos) cout<<"yes\n";
        else cout<<"no\n";
    }

}
