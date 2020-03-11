#include<bits/stdc++.h>

using namespace std;

int main()
{	
	int n,m,t;
	cin >> n >> m;
	vector<pair<int,int>> v;
	for(int i =0;i<n;i++){
		cin >> t;
		v.push_back({t,true});
	}

	for(int i =0;i<m;i++){
		cin >> t;
		v.push_back({t,false});
	}

	sort(v.begin(), v.end());
	t = 0;
	int mm = 0,xx;
	for(auto a:v){
		if (!a.second){
			mm = a.first-1;
			break;
		}
		xx = a.first;
		t++;
	}
	if (t == n && (v[0].first*2 <= mm)){
		cout << max(v[0].first*2,xx) << endl;
	} else 
		cout << -1 << endl;
	return 0;
}