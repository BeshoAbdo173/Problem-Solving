#include <iostream>

using namespace std;

int main(){
	
	int t , x , y , z;
	cin>>t;
	while(t--){
		cin>>x>>y;
		if(x>y){
			swap(x,y);
		}
		cout<<max(2*x , y)*max(2*x , y)<<" ";
	}
	
}