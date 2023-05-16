#include <iostream>

using namespace std;

int main(){
	int t ;
	cin>>t;
	
	string x;
	
	while(t--){
		cin>>x;
		int sum = (int(x[0]-48)-1)*10;
		
		if(x.length() == 1){
			sum += 1;
		}else if(x.length() == 2){
			sum += 3;
		} else if(x.length() == 3){
			sum += 6;
		}else{
			sum += 10;
		}
		cout<<sum<<"\n";
	}
	
}