#include<bits/stdc++.h>

using namespace  std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
		int n;
		long long k;
		cin >> n;
		cin >> k;
		vector<long long> v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];
		bool ans = true;
		int maxp=0;
		unordered_map<long long,int> vv;
		for(long long a:v){
			int p=0;
			while(a){
				// cout << a%k;
				if (a%k<=1){
					if (a%k==1){
						vv[p]++;
					}
				} else 
					ans = false;
				a/=k;
				p++;
			}
			// cout << endl;
			maxp=max(p,maxp);
		}
		for(int i=0;i<=maxp;i++)
			ans&=(vv[i]<=1);
		cout << (ans ? "YES\n" : "NO\n");
	}
	return 0;
}
