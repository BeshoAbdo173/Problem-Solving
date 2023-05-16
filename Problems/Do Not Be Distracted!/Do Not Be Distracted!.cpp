#include <iostream>

using namespace std;

int main(){
	
	string s;
	
	int t , y;
	
	
	cin>>t;

	while(t--){
		int count = 0;
		cin>>y>>s;
		
	bool x{false};
	
		
		
	  		
		for(int i=0; i<y; i++){
			 if(s[i] <= s[i+1] ){
			 	//if(s[i] > 1 && s[i-1] != s[i]){
				 
			//	x = true;
				count++;
				
			}else{
				//x = false;
				continue;
			}
		}
	
		if(count > 1 && y > 1){
			//if(x){
			
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
}
	
