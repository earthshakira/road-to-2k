#include<bits/stdc++.h>

using namespace std;

int main()
{	
	int n,x=0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
		x+=v[i];
	}

	cout << (x%n == 0 ? n : n-1)  << endl;


	return 0;
}