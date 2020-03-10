#include<bits/stdc++.h>

using namespace std;
const int N = 10000000;

int main(){
	int n,m;
	cin >> n >> m;
	int N = 104730;
	int lp[N+1];
	int pp[N+1];
	pp[0] = 0;
	pp[1] = 0;
	int prev = 0;
	vector<int> pr;
	map<int,int> np;
	for (int i=2; i<=N; ++i) {
		pp[i] = prev;
	    if (lp[i] == 0) {
	        lp[i] = i;
	        pr.push_back (i);
	        np.insert({prev,i});
	        prev = i;
	    }
	    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
	        lp[i * pr[j]] = pr[j];
	}

	vector<int> row_cost(n,0),col_cost(m,0);
	int t,c;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j){
			cin >> t;

			c = np[pp[t]] - t;
			// cout << c << " " << t << endl;
			row_cost[i]+=c;
			col_cost[j]+=c;
		}

	cout << min(*min_element(row_cost.begin(), row_cost.end()),*min_element(col_cost.begin(), col_cost.end())) << endl;

	return 0;
}