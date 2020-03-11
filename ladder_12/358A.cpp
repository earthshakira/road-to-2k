#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main(){
	int n ,prev,t;
	cin >> n;
	cin >> prev;
	
	if(n <= 3){
		cout << "no" << endl;
		return 0;
	}
	int x,y;
	vector<pair<int,int>> v;
	for(int i=1;i<n;i++){
		cin >> t;
		x = min(prev,t);
		y = max(prev,t);
		prev = t;
		v.push_back({x,y});
	}
	sort(v.begin(), v.end());
	stack<pair<int,int>> st;
	for(auto it:v){
		cout << it.x << " " << it.y << endl;
		if(st.empty()){
			st.push(it);
		}
	}
	return 0;
}