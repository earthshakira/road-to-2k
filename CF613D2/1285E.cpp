#include<bits/stdc++.h>

#define x first
#define y second

using namespace std;

const int INF = 2e9;

void solve(){
	int n;
	cin >> n;
	vector<pair<int,pair<int,bool>>> bounds; 
	int l,r;
	for (int i = 0; i < 2*n; i+=2){
		cin >> l >> r;
		bounds.push_back({min(l,r),{false,i>>1}});
		bounds.push_back({max(l,r),{true,i>>1}});
	}
	sort(bounds.begin(), bounds.end());
	int count = 0,open=0;
	map<int,bool> counted;
	for(auto it:bounds){
		if(it.y.x){
			open--;
		} else 
			open++;
		if(open == 0)
			count++;
	}
	cout << count << endl;
}
int main(){
	int n;
	cin >> n;
	while(n--)
		solve();
	
	return 0;
}