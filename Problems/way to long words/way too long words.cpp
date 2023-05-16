#include <iostream>
#include <stdlib.h>


using namespace std;



int main(){
	int x;
	cin>> x;
	string s;
	while(x>0){
		cin>> s;
		if( s.length() > 10){
			cout<< s[0] <<s.length() -2 << s[s.length()-1] <<"\n";
		} else{
			cout << s <<"\n";
		}
		x--;
	}

  return 0;
}