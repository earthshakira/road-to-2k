#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	cin >> T;
	for(int t=0;t<T;t++){
		int a,b,n,s;
		cin >> a >> b >> n >> s;
		int remainder = s - min((s/n),a) * n;

		if (remainder > b){
			cout << "NO";
		} else {
			cout << "YES";
		}
		cout << endl;
	}
	return 0;
}