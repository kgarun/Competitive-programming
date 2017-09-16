#include<bits/stdc++.h>
using namespace std;
class ABBA{
    public:
    	 string canObtain(string initial, string target){  //O(N^3)
             bool possible = false;
             while(target.size()>=initial.size()){ //O(N)
                 if(target==initial){ //O(N)
                     possible=true;
                     break;
                 }else{
                     if(target[target.size()-1]=='A') target.pop_back();
                     else {
                         target.pop_back();
                         reverse(target.begin(),target.end()); //O(N)
                        }
             }
                 
                
                 
             } return (possible)?"Possible":"Impossible";
    }
};
