#include<bits/stdc++.h>
#define x first
#define y second

using namespace std;
void stub_bin_search(vector<long long> & v,int n){
	long long r = 0,l = *(max_element(v.begin(), v.end()));
	long long s = 0,z=(v[0]==-1);
	long long diff = 0;
	for(int i=1;i<n;i++){
		z+=(v[i] == -1);
		
		if(v[i] == -1 && v[i-1] == -1)
			continue;

		if (v[i] == -1){
			l = min(v[i-1],l);
			r = max(v[i-1],r);
		} else if (v[i-1] == -1){
			l = min(v[i],l);
			r = max(v[i],r);
		} else {
			diff = max(diff,abs(v[i]-v[i-1]));
		}
	}
	if(z == n){
		cout << 0 << " " << 0 << endl;
		return;
	}
	diff = max(max(r - (l+r)/2,diff),(l+r)/2 - l);
	cout <<  diff << " "  << (l+r)/2 << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		vector<long long> v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];
		stub_bin_search(v,n);
	}
	return 0;
}