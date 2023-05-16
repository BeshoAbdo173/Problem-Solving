#include <iostream>

using namespace std;

int main(){
	
	int x , max = 0;
	
	cin>>x;
	
	for(int i = 3; i <= x/2; i++){
		if((x%i) == 0 && i%2 == 0){
			
			if(i>max){
				max = i;
			}
			
		
		}else if(i%2 == 0 && i%(i/2) == 0){
			if(i>max){
				max = i;
			}
			
		}
		if(max%2 == 0 && (x-max)%3 == 0 && max > 0){
			break;
		}
	}
	
	
	cout<<max <<" "<<x-max ;
	
	
}