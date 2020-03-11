#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main(){
	int n,t,pre,l,r;
	cin >> n;
	vector<pair<int,int>> arcs;
	for (int i = 0; i < n; ++i){
		cin >> t;
		if (i){
			l = min(t,pre);
			r = max(t,pre);
			for(auto p:arcs){
				if (l < p.x && r > p.x && r < p.y || l > p.x && l < p.y && r > p.y ){
					cout << "yes" << endl;
					return 0;
				}
			}
			arcs.push_back({l,r});
		}
		pre = t;
	}
	cout << "no" << endl;
	return 0;
}