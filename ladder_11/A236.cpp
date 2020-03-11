#include<bits/stdc++.h>
/*
23 	Boy or Girl 	Codeforces 	1
*/
using namespace std;

int main(){
	set<char> s;
	string st;
	cin >> st;
	for(char c:st)
		s.insert(c);		
	cout << (s.size()%2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
	return 0;
}