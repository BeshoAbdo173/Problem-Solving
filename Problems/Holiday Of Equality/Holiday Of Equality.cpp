#include <iostream>

using namespace std;

int main(){
	
	int x ;
	cin>>x;
	int max =0 ;
	int  sum =0;
	int arr[x];
	for(int i=0; i<x; i++){
		cin>>arr[i];
		if(arr[i]>max){
			max = arr[i];
		}
	}
	
	for(int j = 0; j<x; j++){
		sum += (max - arr[j]);
	}
	
	cout<<sum;
	
	
}