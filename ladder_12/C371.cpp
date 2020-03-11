#include<bits/stdc++.h>

using namespace std;

int main(){
	string reci;
	map<char,long long> f,inv,cost;
	vector<char> in(3);
	in[0] = 'B';
	in[1] = 'S';
	in[2] = 'C';

	int t = 0;
	cin >> reci;
	
	for (int i = 0; i < 3; ++i) {
		cin >> inv[in[i]];
	}

	for (int i = 0; i < 3; ++i) {
		cin >> cost[in[i]];
	}
	long long r;
	cin >> r;
	for(char a:reci)
		f[a]++;

	long long f_cost  = 0;	
	for(auto it:in){
		f_cost+=cost[it]*f[it];
		if (f[it] == 0)
			inv[it] = 0;
	}

	long long burgers = 0;
	while(inv['B']||inv['S']||inv['C']){
		for(char c:in){
			inv[c] -= f[c];
			if(inv[c] < 0){
				r -= abs(inv[c])*cost[c];
				inv[c] = 0;
			}
			// cout << c << " " << inv[c] << " | ";
		}
		// cout << r << endl;
		if (r<0)
			break;
		burgers +=1;
	}
	
	if (r > 0)
		burgers += (r/f_cost);
	
	cout << burgers << endl;
	return 0;
}