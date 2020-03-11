#include<bits/stdc++.h>

using namespace  std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
		int m,n;
		cin >> n >> m;

		if (n%m){
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}