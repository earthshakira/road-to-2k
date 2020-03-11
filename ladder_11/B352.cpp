#include<bits/stdc++.h>

using namespace std;

int main(){
	int n = 0,t;
	cin >> n;
	map<int,vector<int>> mp;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		mp[t].push_back(i);
	}
	
	vector<pair<int,int>> v;
	stringstream ss;
	int ans_c = 0;
	for(auto it:mp){
		vector<int>  a = it.second;
		int ans = true;
		if(a.size() == 1){
			ss << it.first << " " << 0 << endl;
		} else {
			int d = a[1] - a[0];
			for(int i =2;i<a.size();i++){
				if (a[i] - a[i-1] == d){
					continue;
				}
				ans = false;
				break;
			}
			if(ans){
				ss << it.first << " " << d << endl;
			}
		}
		ans_c+=ans;
	}
	cout << ans_c << endl;
	cout << ss.str();
	return 0;
}