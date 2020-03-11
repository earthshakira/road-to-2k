#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
		int n,a,ans = false;
		cin >> n;
		int prev = 0;
		for(int i=1;i<=n;i++){
			cin >> a;
			if(!ans){
				if(a%2 == 0){
					ans =true;
					cout << 1 << "\n" << i << endl;
				} else if ((prev+a)%2==0){
					ans =true;
					cout << 2 << "\n" << i-1 << " " << i << endl;
				}

			}
			prev=a;
		}
		if(!ans){
			cout << -1 << endl;
		}
	}
	return 0;
}