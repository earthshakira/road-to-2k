#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i){
			cin >> v[i];
		}
		sort(v.rbegin(), v.rend());
		int sides = 1;
		int max_size = 0;
		for(int s:v){
			max_size = max(max_size,min(s,sides));
			sides++;
		}
		cout << max_size << endl;
	}
	return 0;
}