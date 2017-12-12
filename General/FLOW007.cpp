#include<iostream>
 
int main(){
 
	long long int t,n,rev;
	
	std::cin>>t;
	
	while(t--){
	
		std::cin>>n;
		
		rev=0;
		
		while(n){
		
			rev=rev*10+(n%10);
			n/=10;
			}
			std::cout<<rev<<"\n";
			}
			}
			
			 
