#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--){
		int n;
		string s;
		cin >> n >> s;
		int f[] = {0,0};
		stringstream ss;
		for(char c:s){
			f[c=='<']++;
		}

		for(char c:s){
			cout << f[0]+1;
			f[c=='<']--;	
		}
		cout << endl;
		cout << ss.str();
		cout << endl;
	}
	return 0;
}