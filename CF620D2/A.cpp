#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long long x,y,a,b;
		cin >> x >> y >> a >> b;
		long long d = y - x;
		if (d == 0){
			cout << 0 << endl;
			continue;
		} else if (d%(a+b)){
			cout << -1 << endl;
		} else {
			cout << d/(a+b) << endl;
		}

	}
	return 0;
}