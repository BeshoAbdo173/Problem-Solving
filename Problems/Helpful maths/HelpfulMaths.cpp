#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	string s;
	cin>> s;
	sort(s.begin(), s.end());
	for(int i = (s.length()/2+0.5); i< s.length(); i++){
	if(i == (s.length()-1)){
		cout<< s[i];
	}else{
	
	    cout<< s[i] << "+";
      }
	}
}