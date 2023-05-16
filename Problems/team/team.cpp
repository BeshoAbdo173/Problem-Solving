#include <iostream>
#include <stdlib.h>
using namespace std ;

int main(){
	int n;
	cin>>n;
	int countP = 0;
	int x, y ,z;
	//int countC;
	while (n>0){
		
		int countC = 0;
		cin>>x;
			cin>>y;
				cin>>z;
	countC = x + y +z ;
		
		if(countC > 1){
			countP++;
		}
		
		n--;
	}
	cout<<countP;
	
	return 0;
}