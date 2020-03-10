#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		string s,t;
		cin >> s >> t;
		int sn = s.length(),tn=t.length();
		map<char,vector<int>> mp;
		map<char,int> ptr;
		int ind =0;
		for(char a:s){
			mp[a].push_back(ind++);
			ptr[a] = 0;
		}
		int previt = -1,ans=true,it,moves=1;
		for(char a:t){
			if (mp[a].size() == 0){
				ans = false;
				break;
			}
			auto it = upper_bound(mp[a].begin(),mp[a].end(),previt);
			if ((*it) == previt){
				next(it,1);
			}
			if (it == mp[a].end()){
				moves++;
				it = mp[a].begin();
			}
			previt=*it;
		}
		cout << (ans ? moves : -1) << endl;
		
	}
	return 0;
}