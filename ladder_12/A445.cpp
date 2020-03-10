#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if(v[i][j] == '.')
				if(i>0 && v[i-1][j] == 'B' || j>0 && v[i][j-1] =='B')
					v[i][j] = 'W';
				else 
					v[i][j] = 'B';

	for(auto a:v)
		cout << a << endl;
		
	return 0;
}