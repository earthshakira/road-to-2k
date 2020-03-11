#include<bits/stdc++.h>
/*
17 	Cupboards 	Codeforces 	1
*/
using namespace std;

int main(){
	int n,t;
	cin >> n;
	t=n;
	int l=0,r=0,li,ri;
	while(t--){
		cin >> li >> ri;
		l+=li;
		r+=ri;
	}	
	cout << (min(n-l,l) + min(n-r,r)) << endl;
	return 0; 
}