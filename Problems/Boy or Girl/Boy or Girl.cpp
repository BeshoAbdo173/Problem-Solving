#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int count = 0;
	string s;
	getline(cin, s);
	sort(s.begin() , s.end());
    /*string dis = " ";
    bool x{false};
    for(int i= 1; i<s.length(); i++){
    	for(int j=0; j<= dis.length(); j++){
    		
    		if(s[i] == dis[j]){
	    	x = true;
	    	break;
		}
		if(x == true){
			
			x = false;
			
		}else {
			dis.push_back(s[i]);
			count++;
		}
    		
		}
	}*/
	
	for(int i = 1; i<s.length(); i++){
		if(s[i] != s[i-1]){
			count++;
		}
	}
	
	if(count %2 == 0){
		cout<<"IGNORE HIM!";
	}else {
		cout<<"CHAT WITH HER!";
	}
    
    
    
    
}