#include<bits/stdc++.h>

using namespace std;
long long mod = 1e9+7;

int main()
{
	string g[4];
	for(int i =0;i<4;i++)
		cin >> g[i];
	for(int i =0;i<4;i++)
		for(int j=0;j<4;j++)
			g[i][j] = (g[i][j] == '#');
	int ans = false;
	for(int i =0;i<3;i++)
		for(int j=0;j<3;j++)
			if (g[i][j] + g[i+1][j] + g[i][j+1] + g[i+1][j+1] != 2)
				ans = true;
	cout << (ans ? "YES": "NO") << endl;
	return 0;
}