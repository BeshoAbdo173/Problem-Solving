#include <iostream>

using namespace std;


int main(){
	
	int n;
	int x = 0;
	cin>>n;
	string s;
	while(n>0){
		cin>> s;
		if(s == "X++"){
			x++;
		}else if(s == "++X"){
			++x;
		}else if(s == "X--"){
			x--;
		}else if(s == "--X"){
			--x;
		}
		
		
		n--;		
	}
	
		cout<< x;

}
	
	
