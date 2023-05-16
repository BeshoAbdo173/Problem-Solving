#include <iostream>

using namespace std;

int main(){
	int count = 0;
	string s;
	int x;
	cin>>x>>s;
	
	for(int i = 0; i<x; i++){
		if(s[i] == s[i+1]){
			count++;
		}
	}
	cout<<count;
}