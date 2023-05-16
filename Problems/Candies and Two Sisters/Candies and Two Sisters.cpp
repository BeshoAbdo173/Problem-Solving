#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	int x;
	while(t>0){
		cin>>x;
		if(x == 1 || x == 2){
			cout<<0<<"\n";
		}else{
			cout<<(x-1)/2<<"\n";
		}
		
		t--;
	}
	
}