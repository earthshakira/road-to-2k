#include<bits/stdc++.h>
/*
21 	Is your horseshoe on the other hoof? 	Codeforces 	1
*/
using namespace std;

int main(){
	int a;
	set<int> s;
	for(int i=0;i<4;i++){
		cin >> a;
		s.insert(a);
	}
	cout << 4 - s.size() << endl;
	return 0;
}