#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,t,s=0;
	long long k;
	cin >> n >> m >> k;
	vector<long long> a,b;
	vector<pair<long long,long long>> facs;
	for(int i=1;i*i<=k;i++){
		if(k%i)
			continue;
		facs.push_back({i,k/i});
		if(i*i != k )
			facs.push_back({k/i,i});
		// cout << i << " " << k/i << endl;
	}
	for(int i =0;i<n;i++){
		cin >> t;
		s+=t;
		if(t == 0){
			if(s)
				a.push_back(s);
			s=0;
		}
	}
	if(s)
		a.push_back(s);
	s=0;
	for(int i =0;i<m;i++){
		cin >> t;
		s+=t;
		if(t == 0){
			if(s)
				b.push_back(s);
			s=0;
		}
	}
	if(s)
		b.push_back(s);
	long long recs = 0,sr;
	
	for(auto dims:facs){
		long long av=0,bv=0,ac=0,bc=0;
		for(auto aa:a)
			if(aa - dims.first+1 > 0){
				av += (aa - dims.first+1);
				ac++;
			}
		for(auto bb:b)
			if(bb - dims.second+1 > 0){
				bv += (bb - dims.second+1);
				bc++;
			}
		// cout << av << " " << bv << endl;
		recs+=(av*bv); 
	}
	cout << recs << endl;
	return 0;
}