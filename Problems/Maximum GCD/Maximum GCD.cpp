#include <iostream>

using namespace std;

int GCD(int n1 , int n2){
	if(n2 !=0){
		return GCD(n2,n1%n2);
	}else{
		return n1;
	}
}

int main(){
	int t ,a ,b ,c;
	cin>> t;
	int max = 0;
	
	while(t--){
		int x;
		cin>>x;
		for(int i = 1; i<x;i++){ 
			 a = GCD(i , x);
			 if(a > max){
			 
			  	max = a;
			 
			 }
			b = GCD(i , i+1);
			 if(b > max){
			 
			  	max = b;
			 }
			 
			 c = GCD(i , i+2);
			  if((i+2) <= x){
			 	if(c > max){
			 		max = c;
				 }
			 }
			
		}
		
		
		cout<<max<<"\n";
		
	}
}