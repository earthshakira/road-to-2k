#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n,m;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n >> m;
		int s=0,tt=0,my;
		cin >> my;
		for (int i = 1; i < n; ++i)
		{
			cin >> tt;
			s+=tt;
		}
		tt = m - my;
		my+=min(tt,s);
		cout << my << endl;
	}
	return 0;
}