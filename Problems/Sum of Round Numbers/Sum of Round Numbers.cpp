#include<bits/stdc++.h>

using namespace std;

int main(){
	int t , n;
	int arr[100000];
	
	cin>>t;
	while(t--){
		int d=0;
		int rem = 0;
		cin>>n;
		if(n%1000 >= 0){
			rem = n%1000;
			arr[d++] = n-rem;
			n = n%1000;
			
		}
		if(n%100 >= 0){
			rem = n%100;
			arr[d++] = n-rem;
			n = n%100;
			
		}
		if(n%10 >= 0){
			rem = n%10;
			arr[d++] = n-rem;
			n = n%10;
			
		}
		if(n < 10 && n > 0){
			
			arr[d++] = n;
			
		}
		
		
		vector<int>vec;
		
		for(int i = 0; i<d; i++){
			if(arr[i] == 0){
				continue;
			}else{
			
			vec.push_back(arr[i]);
		    }
		}
		
		cout<<vec.size()<<"\n";
		
		for(int i = 0; i<vec.size(); i++){
			cout<<vec[i]<<" ";
		}
		cout<<"\n";
		
	}
}