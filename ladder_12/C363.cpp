#include<bits/stdc++.h>
#define ch first
#define freq second
#define ls first
#define rs second
using namespace std;

int main(){
	string s;
	cin >> s;
	vector<pair<char,int>> v(1,{s[0],1});
	for(int i=1;i<s.length();i++)
		if (v.back().ch == s[i]){
			v.back().freq++;
		} else {
			v.push_back({s[i],1});
		}
	vector<pair<int,int>> lr;
	int l = -1,r;
	for(int i =0;i<v.size();i++){
		v[i].freq = min(2,v[i].freq);
		if( v[i].freq == 2){
			if (l > -1){
				r++;
			} else {
				l = i;
				r = i+1;
			}
		} else if (l > -1){
			lr.push_back({l,r});
			l = -1;
		}
	}
	if (l>-1){
		lr.push_back({l,v.size()});
	}
	for(auto it:lr){
		if((it.rs - it.ls)%2){
			it.ls++;
		}
		while(it.ls < it.rs){
			v[it.ls].second=1;
			it.ls+=2;
		}
	}
	for(auto it:v){
		while(it.freq--)
			cout << it.ch;
	}
	cout << endl;
	return 0;
}