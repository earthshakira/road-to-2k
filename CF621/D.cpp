#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,k,t;
	cin >> n >> m >> k;
	vector<bool> special(n+1,false),visited(n+1,false);
	vector<vector<int>> v(n+1);
	
	for(int i=0;i<k;i++){
		cin >> t;
		special[t] = true;
	}
	int a,b;
	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	queue<vector<int>> q;

	q.push({1,0,special[1] ? 1 : 0});
	int min_len = INT_MAX,l=INT_MAX,num_paths = 0;
	while(!q.empty()){
		auto p = q.front();
		q.pop();
		int sp = special[p[0]] ? 1 : p[2]+1;
		for(int i:v[p[0]]){
			if (i!=n && p[1]>=l)
				continue;
			if (visited[i])
				continue;
			visited[i] = true;
			if (special[i]){
				min_len=min(min_len,sp);
			}
			if(i == n && p[1]+1 <= l){
				l = p[1]+1;
				num_paths++;
			}
			q.push({i,p[1]+1,sp});
		}
	}
	if (num_paths == 1)
		cout << l - min_len + 1 << endl;
	else
		cout << l << endl;
	return 0;
}