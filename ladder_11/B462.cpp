#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	long long k;
	string s;
	cin >> n >> k >> s;
	map<char,int> f;
	for(char ch:s)
		f[ch]++;
	vector<long long> fs;
	for(auto it:f){
		fs.push_back(it.second);
	}

	sort(fs.rbegin(),fs.rend());
	long long val =0,x;
	for(long long a:fs){
		x = min(k,a);
		val+=x*x;
		k-=x;
		if (k<=0)
			break;
	}
	cout << val << endl;
	return 0;
}