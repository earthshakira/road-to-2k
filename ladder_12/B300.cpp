#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,q;
	cin >> n >> q;
	vector<int> grp(n+1,0);
	int id=1,ga,gb,a,b;

	while(q--){
		cin >> a >> b;
		ga = grp[a];
		gb = grp[b];
		if(ga == 0 || gb == 0){
			if(ga == 0 && gb == 0){
				grp[a] = grp[b] = id;
				id++;
			} else if (ga == 0){
				grp[a] = gb;
			} else {
				grp[b] = ga;
			}
		} else if (ga == gb){
			continue;
		} else if (ga != gb){
			cout << -1;
			return 0;
		}
	}
	
	vector<vector<int>> g(id);
	for(int i=1;i<=n;i++)
		g[grp[i]].push_back(i);
	stringstream ss;
	for(int i=1;i<id;i++){
		if(g[i].size() == 3){
			ss << g[i][0] << " " << g[i][1] << " " << g[i][2] << endl;
		} else if (g[i].size() == 2 &&  g[0].size()){
			ss << g[i][0] << " " << g[i][1] << " " << g[0].back() << endl;
			g[0].pop_back();
		} else {
			cout << -1;
			return 0;
		}
	}
	if(g[0].size()%3)
		cout << -1 << endl;
	else{
		cout << ss.str();
		while(g[0].size()){
			for(int i=0;i<3;i++){
				cout << g[0].back() << " ";
				g[0].pop_back();
			}
			cout << endl;
		}
	}
	return 0;
}