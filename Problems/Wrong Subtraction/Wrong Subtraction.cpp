#include <iostream>

using namespace std;

int main(){
	int x , l;
	
	cin>>x>>l;
	
	for(int i = 0; i<l; i++){
		if(x%10 == 0){
			x = x/10;
		}else{
			x--;
		}
	}
	cout<<x;
}