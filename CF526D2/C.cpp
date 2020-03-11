#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,t,x;
	cin >> n;
	string s;
	cin >> s;
	char m = 0,infy='a'-2,pre,nex;
	int i =0;
	int score = 0;
	vector<pair<char,int>> cs(1,{s[0],0});
	for(char a:s){
		if (cs.back().first == a
)			cs.back().second++;
		else
			cs.push_back({a,1});
	}
	// for(auto it:cs)
	// 	cout << it.first << " " << it.second << endl;
	n = cs.size();
	while(cs.size()>1){
		i =  max_element(cs.begin(),cs.end()) - cs.begin();
		if(cs[i].first == '_')
			break;
		pre = (i>0) ? (cs[i-1].first+1) : infy;
		nex = (i + 1 < cs.size()) ? (cs[i+1].first + 1) : infy;
		// cout<< cs[i].first << " " << pre << "," << nex << " -> ";
		if(nex == cs[i].first || pre == cs[i].first){
			score+=(*(cs.begin()+i)).second;
			cs.erase(cs.begin()+i);
		} else {
			cs[i].first = infy;
		}
	}
	cout << score << endl;
	return 0;
}