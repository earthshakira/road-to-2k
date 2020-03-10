#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int a[3];
		int n;
		for(int i = 0;i<3;i++)
			cin >> a[i];
		sort(a,a+3);
		int m = a[2] - a[0] + a[2] - a[1];
		cin >> n;

		if (n >= m && (n-m)%3==0){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}

	}
	return 0;
}