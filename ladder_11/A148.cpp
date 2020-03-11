#include<bits/stdc++.h>
/*
16 	Insomnia cure 	Codeforces 	1
*/
using namespace std;

int main(){
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	int count=0;
	while(d){
		if(!(d%k) || !(d%l) | !(d%m) || !(d%n))
			count += 1;
		d--;
	}
	cout << count << endl;
	return 0;
}