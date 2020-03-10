#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,q;
	cin >> n >> q;
	int l,r;
	vector<long long> arr(n),da(n+1,0);

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	while(q--){
		cin >> l >>r;
		da[l-1]++;
		da[r]--;
	}
	for (int i = 1; i <= n; ++i){
		da[i]+=da[i-1];
	}
	da[n] = 0;
	sort(arr.rbegin(), arr.rend());
	sort(da.rbegin(), da.rend());

	long long sum = 0;
	for(int i=0;i<n;i++){
		sum += arr[i] * da[i];
	}
	cout << sum << endl;
	return 0;
}