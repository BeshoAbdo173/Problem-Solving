#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	
	while(t--){
		int x = 2;
		int sum;
	
		int n;
		cin>> n;
		 if((n/2)%2 != 0){
		 	cout<<"NO \n";
		 }else{
		 	cout<<"YES \n";
		 
		 
		for(int i = 1; i<=(n/2); i++){
			cout<<x<<" ";
			x +=2;
		} 
	
		sum = x-2;
		
		x = 1;
		
		for(int j = 1; j< (n/2); j++){
			
			cout<<x<<" ";
			x += 2;	
		}
		
		cout<< sum+(n/2)-1;
		cout<<"\n";
        	}
	}
	
	
}