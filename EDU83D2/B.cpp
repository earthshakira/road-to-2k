#include<bits/stdc++.h>

using namespace  std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];
		sort(v.rbegin(),v.rend());
		for(int i=0;i<n;i++){
			unordered_set<int> us;
			for(int j=0;j<n;j++){
				us.insert(v[(i+j)%n] - (n + (j-i))%n);
			}
			if(us.size() == n){
				for(int j=0;j<n;j++){
					cout << v[(i+j)%n]<< " ";
				}
				cout << endl;
				break;
			}
		}
	}
	return 0;
}