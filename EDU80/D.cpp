#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> v[8];
	int t;
	for(int i =0;i<n;i++)
		for (int j = 0;j<m;j++){
			cin >> t;
			v[j].push_back(t);
		}
	return 0;
}