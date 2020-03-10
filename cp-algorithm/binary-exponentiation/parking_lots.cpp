#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long n;
	cin >> n;
	if (n==3){
		cout << 24 << endl;
		return 0;
	}
	unsigned long long mid = n-4,sides=n-3;
	cout << sides <<" "<< mid << endl;
	unsigned long long w1 = 12 * pow(4,sides) * (sides+1),w2=0;
	if (n>=4ULL){
		w2 = pow(4,mid) * 36 * (mid+1);
	}
	//4^(n-4)*(n-2)*27
	cout << w1 + w2 << endl;
	return 0;
}

// ^^^^^^ = 132
// 3( 4)3 = 36
// (4 )34 = 48
// 43( 4) = 48