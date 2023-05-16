#include <iostream>
 using namespace std;
 
 int main(){
 	int x;
 	cin>>x;
 	int count = 0;
 	while(x>0){
 		if(x%100 == 0){
 			x -= 100;
 			count++;
		 }else if(x%20 == 0){
		 	x -= 20;
		 	count++;
		 }else if(x%10 == 0){
		 	x -= 10;
		 	count++;
		 }else if(x%5 == 0){
		 	x -= 5;
		 	count++;
		 }else if(x%1 == 0){
		 	x -= 1;
		 	count++;
		 }
	 }
	 cout<<count;
 }