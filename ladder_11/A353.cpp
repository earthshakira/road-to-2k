#include<bits/stdc++.h>

using namespace std;
long long mod = 1073741824;

int main()
{
	int n;
	cin >> n;
	int l,r;
	int f[]={0,0,0,0};
	for (int i = 0; i < n; ++i)
	{
		cin >> l >> r;
		l%=2;
		r%=2;
		f[(l<<1)|r]++;
	}

	int t = (f[3] + f[2])%2,b = (f[3] + f[1])%2;
	if((t|b)==0 || (t&b && (f[2] || f[1]))){
		cout << (t|b) << endl;	
	} else {
		cout << -1 << endl;
	}
	return 0;
}