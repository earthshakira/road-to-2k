#include<bits/stdc++.h>

using namespace std;

int dfs(vector<string> a,int n,int x,int y){
	if(y>=n || x >= n)
		return 0;
	
	if(a[x][y] == '0')
		return 0;

	return dfs(a,n,x,y+1) + dfs(a,n,x+1,y);
}

int main(){
	int n;
	cin >> n;
	vector<string> a(n);
	for (int i = 0; i < n; ++i)
			cin >> a[i];
	stack<pair<int,int>> t;
	cout << dfs(a,n,0,0) << endl;
	return 0;
}