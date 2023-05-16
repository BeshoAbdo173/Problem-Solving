#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[4] ;
	int max = 0;
	int n = sizeof(arr)/ sizeof(arr[0]);
	for(int i = 0; i<4; i++){
		cin>>arr[i];
		if(arr[i]>max){
			max = arr[i];
		}
	}
	
	sort(arr, arr +n);

	for(int i = 0; i<3; i++){
		cout<<max - arr[i]<<" ";
	}
	
}