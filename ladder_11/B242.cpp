#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> v(n);
	int l = INT_MAX;
	int r = INT_MIN;
	for (int i = 0; i < n; ++i){
		cin >> v[i].first;
		cin >> v[i].second;
		l = min(l,v[i].first);
		r = max(r,v[i].second);
	}
	int ind = 0;
	for(auto i:v){
		ind++;
		if (l == i.first && r == i.second){
			cout << ind << endl;
			return 0;
		} 
	}
	cout << -1 << endl;
	return 0;
}