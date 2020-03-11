#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int d,n;
		cin >> n >> d;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */cin >> v[i];
		}
		int i =1;
		while(i<n && d >= i){
			if(v[i] == 0){
				i++;
				continue;
			}
			v[i]--;
			d-=i;
			v[0]++;
		}
		cout << v[0] << endl;
	}
	return 0;
}