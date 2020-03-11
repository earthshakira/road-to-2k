#include<bits/stdc++.h>

using namespace std;

bool check_pass(string & s,int l,map<char,set<char>> & mp){
	string pass = s.substr(l,mp.size());
	set<char> f1(pass.begin(),pass.end());
	map<char,set<char>> sub;
	return f1.size() == mp.size() && mp[pass.front()].size() == 1 && mp[pass.back()].size() == 1;
}

int main(){
	int T;
	int n;
	cin >> T;
	for(int t=0;t<T;t++){
		string pass;
		cin >> pass;
		if(pass.length() == 1){
			cout <<"YES\n" << pass;
			for(int i =0;i<26;i++){
				char t = i+'a';
				if(t!=pass[0])
					cout << t;
			}
			cout << endl;
			continue;
		}
		map<char,int> f,ff;
		map<char,set<char>> mp;
		char prev;
		bool first = true,ans = true;;
		for(char a:pass){
			f[a] = 1;
			ff[a] = 0;
			if(!first){
				mp[prev].insert(a);
				mp[a].insert(prev);
				if(mp[a].size()>2 || mp[prev].size()>2)
					ans = false;
			}
			first = false;
			prev = a;
		}
		if(!ans){
			cout << "NO" << endl;
			continue;
		}
		int l=0;
		ans = false;
		for(int i=0;i<pass.length();i++){
			if(check_pass(pass,i,mp)){
				l = i;
				ans = true;
				break;
			}
		}
		if(!ans)
			cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			string s = pass.substr(l,mp.size());
			cout << s;
			for(int i =0;i<26;i++){
				char c = i+'a';
				if(mp.count(c))
					continue;
				cout << c;
			}
			cout << endl;
		}
	}
	return 0;
}