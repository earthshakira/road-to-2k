#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<long long,int>> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end());

	return 0;
}