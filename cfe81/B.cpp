#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;

	while(T--){
		int n,x,ans = 0;
		string s;
		cin >> n >> x;
		cin >> s;
		long long ct[] = {0,0};
		vector<int> diff;
		for(char a:s){
			ct[a - '0']++;
			diff.push_back(ct[0] - ct[1]);
		}

		int d = diff[n-1];
		if (x == 0)
			ans+=1;
		if(d == 0){
			for(int a:diff)
				if (a == x)
					ans = -1;
		} else {
			
			for(int a:diff){
				if ((x - a)%d == 0 && ((x-a)/d) >= 0)
					ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}