#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> arr(m),arr2(m);
	for (int i = 0; i < m; ++i){
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	int minc = 0;
	int maxc = 0;
	while(n--){
		auto mi = min_element(arr.begin(), arr.end());
		auto mxi = max_element(arr2.begin(), arr2.end());

		minc+= *mi;
		(*mi)-=1;
		if(*mi == 0)
			*mi = INT_MAX;

		maxc += *mxi;
		(*mxi) -= 1;
	}
	cout << maxc << " " << minc << endl;
	return 0;
}