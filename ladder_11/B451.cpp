#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	vector<pair<int,int>> slopes;
	int d  = 0,dd;

	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	bool open = false;
	int l = 0,r = 0;
	for(int i=1;i<n;i++){
		// cout << v[i] << " " << v[i-1] << endl;
		if (v[i] < v[i-1]){
			if (open){
				r++;
			} else {
				l = i - 1;
				r = i;
				open=true;
			}
		} else if (open){
			slopes.push_back({l,r});
			open = false;
		}
		// cout << l << " "<< r  << " " << open << endl; 
	}
	if (open){
		slopes.push_back({l,r});
		open = false;
	}

	bool lvalid=true,rvalid=true;
	if (l>0){
		lvalid = v[r] > v[l-1];
	}
	if (r < n-1){
		rvalid = v[l] < v[r+1];
	}

	if (rvalid && lvalid && slopes.size() <= 1){
		cout << "yes\n" << l+1 << " " << r+1 << endl;
	} else {
		cout << "no";
	}
	return 0;
}