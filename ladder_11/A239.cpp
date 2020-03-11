#include<bits/stdc++.h>

using namespace std;
long long mod = 1e9+7;

int main()
{
	int m,n,d;
	cin >> n  >> m >> d;
	int t,s=0,k=m*n;
	vector<int> g(n*m);
	int mine = INT_MAX;

	for (int i = 0; i < (m*n); ++i)	{
		cin >> g[i];
		mine = min(mine,g[i]);
	}
	int moves = 0;
	int maxe = 0;
	for (int i = 0; i < (m*n); ++i)	{
		g[i] -= mine;
		if (g[i]%d){
			moves = -1;
			break;
		}
		g[i]/=d;
		s+=g[i];
		maxe = max(maxe,g[i]);
	}

	if (moves == - 1){
		cout << moves << endl;
		return 0;
	}

	long long  minm = INT_MAX;
	for(int i=0;i<=maxe;i++){
		long long m1 = 0;
		for (int a:g)
		{
			m1+=abs(a-i);
		}
		minm=min(minm,m1);
	}
	cout << minm << endl;
	return 0;
}