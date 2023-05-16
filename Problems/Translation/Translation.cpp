#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string s , rev;
	cin>>s>>rev;
	reverse(rev.begin(), rev.end());
	if(s == rev){
		cout<<"YES";
		
	}else{
		cout<<"NO";
	}
}