#include <iostream>

using namespace std;

int main(){
	int t ,x , y , z;
	int max =0;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
	/*	for(int i =0; i<=z; i++){
			if((i%x) == y){
				if(i>max){
					max = i;
				}
			}
		}
		
		cout<<max;
		max =0;*/
		
		cout<<(z-y)/x*x+y<<"\n";
	}
}