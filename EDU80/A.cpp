#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int d,n;
		cin >> n >> d;
		if(d<=n){
			cout << "YES\n";
			continue;
		}
		int time;
		bool ans = false;
		for(int i = 1;i*i<=(2*d) && i<d;i++){
			time = i + (d/(i+1)) + !!(d%(i+1));
			// cout << time << endl;
			if(time<=n){
				ans = true;
				break;
			}
		}
		cout << (ans? "YES\n":"NO\n");
	}
	
	return 0;
}