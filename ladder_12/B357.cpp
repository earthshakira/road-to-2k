#include<bits/stdc++.h>

using namespace std;

int main(){
	int m,n,a,b,c;
	cin >> n >> m;
	vector<int> col(n+1,0);
	int com[4][2] = {{0,0},{2,3},{1,3},{1,2}};
	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b >> c;
		if (col[a]){
			col[b] = com[col[a]][0];
			col[c] = com[col[a]][1];
		} else if (col[b]) {
			col[a] =com[col[b]][0];
			col[c] =com[col[b]][1];
		} else if (col[c]) {
			col[a] =com[col[c]][0];
			col[b] =com[col[c]][1];
		} else {
			col[a] = 1;
			col[b] = 2;
			col[c] = 3;
		} 
	}
	for(int i =1;i<=n;i++){
		cout << (col[i] ? col[i] : 1) << " ";
	}
	cout << endl;
	return 0;
}