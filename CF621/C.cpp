#include<bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin >> s;
	int n = s.length();
	long long ff[26][26],f[26];
	for(int i =0;i<26;i++){
		f[i] = 0;
		for(int j =0;j<26;j++){
			ff[i][j] = 0;
		}
	}
	for(char c:s){
		c-='a';
		for(int i =0;i<26;i++){
			ff[i][c] += f[i];
		}
		f[c]++;
	}
	long long m = 1;
	for(int i =0;i<26;i++){
		for(int j =0;j<26;j++){
			m = max(ff[i][j],m);
		}
		m = max(f[i],m);
	}
	cout << m << endl;
	return 0;
}