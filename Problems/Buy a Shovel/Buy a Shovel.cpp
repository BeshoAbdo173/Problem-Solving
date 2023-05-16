#include <iostream>

using namespace std;
 int main(){
 	
 	int k , r ;
 	int x = 1;
 	bool b{true};
 	
 	cin>>k >> r;
 	
 	int i = 0;
 	while(b){
 		i++;
 		
 		x = k*i;
 		if(x%10 == 0 || x%10 == r){
 			b = false;
		 }
 		
	 }
	 cout<<i;
 	
 }