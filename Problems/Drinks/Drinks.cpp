#include <iostream>

using namespace std;

int main(){
	
	int n , x;
	double sum = 0.0;
	double percent;
	cin>>n;
	int i = n;
	while(i>0){
		cin>>x;
		
		sum += x;
		i--;
	}
	percent = sum / n;
	
	cout<<percent;
        
}