#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; ++i)
		cin >> b[i];

	int gr = -1, count = 0;
	int t;
	for(int aa:a){
		for(int bb:b){
			if(bb%aa == 0){
				if(bb/aa == gr){
					count++;
				} 
				if(bb/aa > gr){
					gr = bb/aa;
					count = 1;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}