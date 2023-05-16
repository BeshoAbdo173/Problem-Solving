#include <iostream>

using namespace std;

int main(){
	
	int t , a , b;
	cin>>t;
	while(t--){
		int tot = 0;
		cin>>a>>b;
		if(a%b == 0){
			cout<<tot<<"\n";
		}else{
			tot = a%b;
			cout<<b-tot<<"\n";
		}
		
	}
/*	while(t>0){
		int count = 0;
		cin>>a>>b;
		while(a%b != 0){
			a++;
			count++;
		}
		cout<<count;
	}*/
	
}