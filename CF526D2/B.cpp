#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,t,x;
	cin >> n;
	unordered_map<int,long long> mp;
	long long m = 0;
	for(int i=0;i<n;i++){
		cin >> t;
		x=t-i;
		mp[x]+=t;
		m = max(m,mp[x]);
	}
	cout << m << endl;
	return 0;
}