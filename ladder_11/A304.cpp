#include<bits/stdc++.h>

using namespace std;
long long mod = 1073741824;

int main()
{
	int n,s,d;
	double k = 0;
	cin >> n;
	int num = 0;
	set<int> sq;
	vector<bool> vv(n*n + 1,false);
	for (int i =2;i<=n;i++)
		vv[i*i] = true;
	int lim = n * n;
	for(int i=2;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			d = i*i + j*j;
			if (d > lim)
				break;
			num+=vv[d];
		}
	}	
	cout << num << endl;
	return 0;
}