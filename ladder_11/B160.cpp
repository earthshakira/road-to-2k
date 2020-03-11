#include<bits/stdc++.h>

using namespace std;

int main()
{	int n;
	string s;
	cin >> n >> s;
	sort(s.begin(),s.begin()+n);
	sort(s.begin()+n,s.end());
	bool gt = true,lt = true;

	for(int i =0;i<n;i++){
		lt&=(s[i] < s[n+i]);
		gt&=(s[i] > s[n+i]);
	}
	cout << ((lt || gt) ? "YES" : "NO") << endl;
	return 0;
}