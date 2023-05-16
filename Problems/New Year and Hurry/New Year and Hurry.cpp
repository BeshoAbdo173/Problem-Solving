#include <iostream>

using namespace std;
 int main(){
 	int n , k , x;
 	int count = 0;
 	cin>>n >> k;
 	x = 240 -k;
 	int i = 0;
 	while(i <= x){
 		for(int j =1; j <= n; j++){
 			i += (j*5);
 			if(i <= x && count < n){
 				count++;
			 }
		 }
	 }
 	
 	cout<< count;
 	
 }