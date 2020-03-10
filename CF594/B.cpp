#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	sort(v.begin(), v.end());
	int l = 0,r=n-1;

	long long x = 0 ,y = 0;
	while(l<r){
		x+=v[l++];
		y+=v[r--];
	}
	if (l==r){
		if (x > y)
			x+=v[l];
		else 
			y+=v[l];
	}
	cout << (x*x + y*y) << endl;
	return 0;
}