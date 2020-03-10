#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string a;
	cin >> n;
	cin >> a;

	map<char,int> f;
	for(char aa:a){
		f[aa]+=1;
	}
	cout << f['L'] + f['R'] + 1 << endl;
	return 0;
}