#include<bits/stdc++.h>
/*
11 	Panoramix's Prediction 	Codeforces 	1
*/
using namespace std;

bool is_prime(int n){
	if(n==2)
		return true;
	if (n%2 == 0 || n==1)
		return false;
	int x = ceil(sqrt(n));
	for(int i=2;i<=x;i++){
		if (n%i)
			continue;
		return false;
	}
	return true;
}
int main(){
	int n,m;
	int i;
	cin >> n >> m;
	for(i =n+1;i<m;i++){
		if (is_prime(i))
			break;
	}

	cout << ((i==m && is_prime(m) && is_prime(n)) ? "YES" : "NO" ) << endl;
	return 0;
}