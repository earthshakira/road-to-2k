#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int a,b;
		cin >> a >> b;
		int p = 10;
		long long ans=0;
		while(p-1<=b){
			ans+=a;
			p*=10;
		}
		cout << ans << endl;
	}
	
	return 0;
}