#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--){
		int n,d;
		cin >> n >> d;
		int lower = 0,upper = (n*(n+1))/2;
		for(int i=1;i<=n;i++){
			lower+=log2(i);
		}
		if(d < lower || d > upper){
			cout << "NO" << endl;
			continue;
		}

		vector<vector<int>> v(n);
		for(int i=0;i<n;i++){
			v[i].push_back(i+1);
		}
		int leaf_level = n-1,l,pre;
		int c = upper;
		while(c > d){
			l = v[leaf_level].back();
			v[leaf_level].pop_back();
			pre = leaf_level-1;
			if(v[leaf_level].size() == 0)
				leaf_level--;
			v[pre].push_back(l);
			if(v[pre].size() > 2*v[pre-1].size()){
				l = v[pre].back();
				v[pre].pop_back();
				v[pre+1].push_back(l);
				if(pre+1 > leaf_level)
					leaf_level=pre+1;
				l = v[pre].back();
				v[pre].pop_back();
				v[pre-1].push_back(l);
			}
			c--;
		}
		for(auto vv:v){
			for(auto i:vv){
				cout << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}