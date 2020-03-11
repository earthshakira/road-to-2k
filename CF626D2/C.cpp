#include<bits/stdc++.h>

using namespace std;

bool is_bal(string &s,int l,int r){
	// cout << s.substr(l,r-l)<< endl;
	int op=0;
	for(l;l<r;l++){
		if(op<0)
			return true;
		if(s[l] == '(')
			op++;
		else 
			op--;
	}
	return op != 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cin >> n >> s;
	int l=0;
	int f[] = {0,0};
	int cost = 0;
	for(int r=0;r<n;r++){
		f[s[r]==')']++;
		// cout << f[0] << " " << f[1] << endl;
		if(f[0]==f[1]){
			cost += (is_bal(s,l,r+1)*(r-l+1));
			l=r+1;
		}
	}

	if(f[0]!=f[1]){
		cout << -1 << endl;
	} else {
		cout << cost << endl;
	}
	return 0;
}