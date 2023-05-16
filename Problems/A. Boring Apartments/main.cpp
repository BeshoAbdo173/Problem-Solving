#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	vector<int> v;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int x;
	cin>>x;
	v.erase(v.begin()+x);
	
	for(int i=0;i<n;i++){
		cout<<v[i];
}
	
	return 0;
}