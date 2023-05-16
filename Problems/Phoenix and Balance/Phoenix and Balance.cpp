#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t , n;
	cin>>t;
	
	while(t--){
		cin>>n;
		int a = pow(2 , n);
		int b = 0;
		int half = n/2;
		for(int i=0; i<n; i++){
			if(i< half){
				a += pow(2 , i);
			}else{
				b += pow(2 , i);
			}
		}
		cout<<(a-b)-1<<"\n";
	}
}