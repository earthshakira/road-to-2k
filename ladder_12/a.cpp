#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	cin >> n;
	vector<int> v(n),b(n,-20);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	int tmp = v[n-1];
	 v[n-1] = v[0];
	 v[0] = tmp;

	 for(int tm:v)
	 	cout <<tm << " ";
	 cout << endl;
	return 0;
}