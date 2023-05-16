#include <iostream>

using namespace std;

int main(){
	
	long long n;
	cin>>n;
	long long sum = 0;
	
	if(n%2 == 0){
		sum = (n/2);
	}else{
		sum = ((n+1)/2)*(-1);
	}
/*	while(n>0){
		if(n%2 == 1){
			sum += (-n);
		}else{
			sum += n;
		}
		n--;
	}*/
	
	/*for(int i =1; i<=n; i++){
		if(i%2 == 1){
			sum += (-i);
		}else{
			sum += i;
		}
	}*/
      cout<<sum;
	return 0;
}

