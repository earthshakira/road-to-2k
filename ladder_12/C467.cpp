#include<bits/stdc++.h>

using namespace std;

int n,m,k;
map<long long,long long> cache;

long long maxe(vector<long long> & v,int l,int k){
	if(k*m > (n-l+1) || k==0)
		return 0L;
	long long key = l;
	key = key<<32;
	key+=k;
	if(cache.count(key))
		return cache[key];
	// cout << l << " " << k << endl;
	long long taken = v[l+m-1] - v[l-1];
	long long val =  max(taken + maxe(v,l+m,k-1),maxe(v,l+1,k));
	cache[key] = val;
	return val;
}

int main(){
	cin >> n >> m >> k;
	vector<long long> v(n+1);
	v[0]=0;
	for (int i=1; i <= n; ++i){
		cin >> v[i];
		if(m>1)
			v[i]+=v[i-1];
	}
	if(m==1){
		sort(v.rbegin(), v.rend());
		long long s=0;
		for(int i=0;i<k;i++)
			s+=v[i];
		cout << s << endl;
		return 0;
	}
	
	cout << maxe(v,1,k) << endl;
	return 0;
}