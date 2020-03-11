#include<bits/stdc++.h>

using namespace std;

int main()
{	
	
	int n,t;
	cin >> n;
	map<int,int> v;
	
	for (int i = 0; i < n; ++i){
		cin >> t;
		v[t]++;
	}

	int m = n/2 + n%2;

	for(auto it:v){
		if (it.second > m) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}