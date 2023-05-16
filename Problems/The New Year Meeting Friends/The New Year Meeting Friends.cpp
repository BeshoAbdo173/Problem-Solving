#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[3];
	int x, y , z ;
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i<3; i++){
		cin>>arr[i];
	}
	sort(arr , arr + n);
/*	for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";*/
	x = abs(arr[2] - arr[1]);
//	cout<<"\n"<<x<<"\n";
	y = (arr[1] - arr[0]);
	z = x+y;
	cout<<z;
	
}