#include<bits/stdc++.h>

using namespace std;

int main(){
	int m,n;
	cin >> n >> m;
	unordered_map<string,int> mp,sel;
	string s;
	vector<pair<string,string>> v;
	for(int i =0;i<n;i++){
		cin >> s;
		string r(s.rbegin(),s.rend());
		if(s==r)
			sel[s]++;
		else if(mp[s]){
			mp[s]--;
			v.push_back({r,s});
		} else {
			mp[r]++;
		}
	}
	stack<string> right;
	stringstream ss;
	for(auto it:v){
		ss << it.first;
		right.push(it.second);
	}

	for(auto it:sel){
		while(it.second >= 2){
			it.second -= 2;
			ss << it.first;
			right.push(it.first);
		}
	}
	string mid = "";
	for(auto it:sel){
		if(it.second == 1){
			ss << it.first;
			break;
		}
	}
	while(!right.empty()){
		ss << right.top();
		right.pop();
	}
	string op = ss.str();
	cout << op.length() << endl;
	cout << op << endl;
	return 0;
}