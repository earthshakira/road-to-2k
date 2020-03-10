#include<bits/stdc++.h>
#define x first
#define y second

using namespace std;

int main(){
	int T;
	int n,a,b;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n;
		vector<pair<int,int>> packages;
		int x = 0,y = 0;
		for (int i = 0; i < n; ++i){
			cin >> a >> b;
			packages.push_back({a,b});
		}

		sort(packages.begin(), packages.end());
		int i = 0;
		string s;
		bool ans = true;
		while(i<packages.size()){
			auto t = packages[i];
			if (t.x > x) {
				s += "R";
				x++;
			} else if (t.y > y) {
				s += "U";
				y++;
			}

			if (x == t.x && y == t.y){
				i++;
				continue;
			}
			if (!(t.x >=x && t.y>=y)){
				ans = false;
				break;
			}
			
		}
		if (ans) {
			cout << "YES\n" << s << endl;
		} else {
			cout << "NO\n";
		}
	}
 	return 0;
}