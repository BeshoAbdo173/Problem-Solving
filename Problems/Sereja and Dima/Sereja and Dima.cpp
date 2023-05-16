#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;

		
		int arr[n+1];
		int left = 1;
		int right = n;
		int SS = 0;
		int SD = 0;
	
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int x=1;
	while(left <= right){
		if(x%2 == 1){
			
			if(arr[left] >= arr[right]){
				SS += arr[left++];
			}else{
				SS += arr[right--];
			}
			
		}else{
			
				if(arr[left] >= arr[right]){
				SD += arr[left++];
			}else{
				SD += arr[right--];
			}
			
		}
		x++;
	}
	cout<<SS<<" "<<SD;

}