#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	cin >> T;
	while(T--){
		int a,b;
		cin >> a;
		long long t;
		long long va[2] = {0L,0L};
		long long vb[2] = {0L,0L};
		
		for (int i = 0; i < a; ++i){
			cin >> t;
			va[t%2]++;
		}
			
		cin >> b;
		for (int i = 0; i < b; ++i){
			cin >> t;
			vb[t%2]++;
		}

		cout << (vb[0] *va[0] + vb[1]* va[1]) << endl;


	}
	return 0;
}