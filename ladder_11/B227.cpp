#include<bits/stdc++.h>
/*
30 	Effective Approach 	Codeforces 	2
*/
using namespace std;

int main(){
	int n,m,t;
	cin >> n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		cin >> t;
		mp[t] = i+1;
	}
	cin >> m;
	long long l=0,r=0;
	while(m--){
		cin >> t;
		l+=mp[t];
		r+=(n-mp[t] + 1);
	}
	cout << l << " " << r << endl;
	return 0;
}