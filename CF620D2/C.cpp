#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	string res[] = {"NO","YES"};
	while(q--){
		int n;
		long long m;
		cin >> n >> m;
		vector<vector<long long>> v;
		bool ans = true;
		for (int i = 0; i < n; ++i)
		{	
			vector<long long> c(3);
			for (int j = 0; j < 3; ++j){
				cin >> c[j];
			}
			if(i == 0 || c[0] != v.back()[0]){
				v.push_back(c);
			} else {
				if(c[2] < v.back()[1] || c[1] > v.back()[2]){
					ans = false;
				}
				v.back()[1] = max(v.back()[1],c[1]);
				v.back()[2] = min(v.back()[2],c[2]);
			}
		}
		long long t = 0,l = m,r = m,d;
		
		for(auto it:v){
			d = it[0] - t;
			l-=d;
			r+=d;
			if(it[2] < l || it[1] > r){
				ans = false;
				break;
			}
			l = max(l,it[1]);
			r = min(r,it[2]);
			t = it[0];
		}
		cout << res[ans] << endl;
	}
	return 0;
}