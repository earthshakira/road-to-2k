#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	cin >> T;
	for(int t=0;t<T;t++){
		string s;
		cin >> s;
		n = s.length();
		bool open = false;
		int l = 0,r = n-1;;
		while(l<n && s[l]=='0')l++;
		if (l == n){
			cout << 0 << endl;
			continue;
		}
		while(r>=0 && s[r] == '0')r--;
		int del = 0;
		// cout << l << " " << r << endl;
		while(l<r){
			del+=(s[l++]=='0');
		}
		cout << del << endl;
	}
	return 0;
}