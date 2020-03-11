#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	int a,b;
	vector<vector<bool>> v;
	for(int i=0;i<n;i++){
		vector<bool> vn(n);
		v.push_back(vn);
	}
	int q;
	cin >> q;
	while(q--){
		int n;
		string s;
		cin >> n >> s;
		cout << n << " " << s << endl;
	}
	return 0;
}