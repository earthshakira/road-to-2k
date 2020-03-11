#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		long long x;
		cin >> n >> x;
		vector<long long> v(n);
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		sort(v.begin(), v.end());
		int i = 0;
		long long s = 0;
		long long j = LLONG_MAX,ju;
		for(int i=0;i<n;i++){
			// cout << v[i] << " " << x % v[i] << endl;
			ju = x/v[i] + !!(x%v[i]);
			if (ju == 1 && x!= v[i])
				ju++;
			j = min(j,ju);
		}
		
		cout << j << endl;
	}

	return 0;
}