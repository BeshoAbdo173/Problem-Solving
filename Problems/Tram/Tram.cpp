#include <iostream>

using namespace std;

int main(){
	int max = 0;
	int x = 0;
	int n;
	int a , b;
	cin>>n;
	while(n>0){
		cin>>a>>b;
		x = x-a;
		x = x+b;
		if(x>max){
		   max = x;
		}
		n--;
	}
	cout<<max;
}