#include<bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	getline(cin,s);
	getline(cin,t);
	map<char,int> f;
	for(char a:s)
		f[a]++;
	
	for(char a:t){
		if (a == ' ')
			continue;
		f[a]-=1;
		if (f[a] < 0){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}