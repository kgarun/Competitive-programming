/*
 *Prints all permutations of string in lexicographical order 
 *Handles duplicate characters in string
 *Instead of set ,vector can be used to print permutations of string in non-lexicographical order
 */



#include <bits/stdc++.h>
using namespace std;


bool flag[1024];// Maximum String Length

set< string > permutations;

void permute(string s,string t){

	if(t.size()==s.size()) permutations.insert(t);

	else{

		for(int i=0;i<s.size();++i){

			if(flag[i]==0){

				flag[i]=1;

				permute(s,t+s[i]);

				flag[i]=0;

			}

		}

	}


}


int main(){

	string s;

	cin>>s;

	permute(s,"");

	for(auto p:permutations) cout<<p<<"\n";


}