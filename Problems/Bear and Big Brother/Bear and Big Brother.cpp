#include <iostream>

using namespace std;

int main(){
	int count = 0;
	int a , b;
	cin>>a >>b;
	while(a<b){
		a = (a*3);
		b = (b*2);
		count++;
	}
	
	if(a == b){
		cout<<count+1;
	}else{
		cout<<count;
	}
}