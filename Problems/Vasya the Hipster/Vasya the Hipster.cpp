#include <iostream>

using namespace std;

int main(){
	int a , b , x , y;
	
	cin>>a>>b;
	
/*	if(a>b){
		y = b;
	}else if(b>a){
		x = a;
	}*/
	
	if(abs(a-b) == 1){
		y = 0 ;
	}else{
		y = abs(a-b)/2;
	}
	x = min(a , b);
	
	cout<<x<<" "<<y;
	
}