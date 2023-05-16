#include <iostream>

using namespace std;

int main(){
	int count = 0;
	int j;
	string s;
	getline(cin, s);
    string dis;
    bool x{false};
	
	for(int i = 1; i< s.length(); i+=3){
		for(j = 0; j<= dis.length(); j++){
			
	    if(s[i] == dis[j]){
	    	x = true;
	    	break;
		}

		}
		
		if(x == true){
			x = false;
			
		}else if(s[i] == '}'){
			count = 0;
		}else {
			dis.push_back(s[i]);
			count++;
		}
		
		
	}
	
	cout<< count;
}