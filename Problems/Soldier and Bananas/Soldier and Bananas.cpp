#include <iostream>

using namespace std; 

int main(){
	
	int k , n ,w , borrow;
	int count = 0;
	cin>> k >> n >>w;
	
	for(int i = 1; i<= w; i++){
		count += (i*k);
	}
	borrow = count - n;
	if(count <= n){
		cout<<0;
	}else{
		cout<<borrow;
	}
	
}