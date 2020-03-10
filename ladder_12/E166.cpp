#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,MOD = 1e9 + 7;
	cin >> n;
	long long t = 1;
	for(long long i=1;i<=n;i++){
			t = (t  - ((i%2)*2 - 1)) ;
			t%=MOD;
			t*=3;
			t%=MOD;
	}
	cout << t;
	return 0;
}