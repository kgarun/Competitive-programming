#include <bits/stdc++.h>
using namespace std;



struct trie{

	trie* child[26];

	bool isLeaf;

	int prefixFreq,wordFreq;

	trie(){

		bzero(child,sizeof(child));

		isLeaf=0;

		prefixFreq=wordFreq=0;

	} 

	void insert(string s,int pos){

		if(s.size()==pos){

			isLeaf=1;

			++wordFreq;


		}

		else{

			++prefixFreq;

			int position=s[pos]-'a';

			if(child[position]==0) child[position]=new trie;

			child[position]->insert(s,++pos);

		}




	}

	int findWord(string s,int pos){

		if(s.size()==pos) {

			if(isLeaf) return wordFreq;

			return false;
		}

		else {

			int position=s[pos]-'a';

			if(child[position]==0) return false;

			return child[position]->findWord(s,++pos);


		} 

	}

	int findPrefix(string s,int pos){

		if(s.size()==pos) return prefixFreq;

		else {

			int position=s[pos]-'a';

			if(child[position]==0) return false;

			return child[position]->findPrefix(s,++pos);


		} 

	}


};

	int main(){



		trie root;

		root.insert("arun",0);

		root.insert("are",0);

		root.insert("arrahman",0);

		root.insert("app",0);

		if(root.findWord("arun",0)) cout<<"found "<<root.findWord("arun",0)<<" words\n";

		if(root.findWord("ar",0)) cout<<"found "<<root.findWord("ar",0)<<" words\n";

		else cout<<"Nahi beta\n";


		cout<<"found  "<<root.findPrefix("ar",0)<<" words with prefix \"ar\"\n"; 




}