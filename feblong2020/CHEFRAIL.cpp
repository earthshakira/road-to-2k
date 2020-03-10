#include<bits/stdc++.h>

using namespace std;
unordered_map<long long,unordered_set<long long>> cache;
unordered_set<long long> get_facs(long long tmp){
	long long sq = tmp*tmp;
	if( cache.count(tmp))
		return cache[tmp];
	long long f;
	unordered_set<long long> fac,fac2;
	for(long long i=1;i*i<=tmp;i++){
		if(tmp%i)
			continue;
		fac.insert(i);
		fac.insert(tmp/i);
		for(long long j:fac){
			if(tmp%(j*i) && i*j<tmp){
				fac2.insert(i*j);
			}
		}
	}
	fac.insert(fac2.begin(), fac2.end());
	cache[tmp] = fac;
	return fac;
} 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
		int m,n;
		cin >> n >> m;
		long long ctr = 0;
		long long tmp;
		long long xmax = LLONG_MIN,ymax = LLONG_MIN;
		bool z = false;
		unordered_set<long long> xs,ys;
		long long triangles = 0,s=0;
		int xd=0,yd=0,xc=0,yc=0;
		for (int i = 0; i < n; ++i){
			cin >> tmp;
			xs.insert(tmp);
			xd+=(tmp<0);
			xc+=(tmp>0);
		}
		for (int i = 0; i < m; ++i){
			cin >> tmp;
			ys.insert(tmp);
			yd+=(tmp<0);
			yc+=(tmp>0);
		}
		long long res = 0;		
		// int ct=0;
		long long f,f2,f3;
		for(long long x:xs){
			long long tmp = abs(x);
			long long sq = tmp * tmp;

			cout << sq << endl;
			for(long long ff:get_facs(tmp)){
				f = sq/ff;
				cout << ff << " " << f << endl;
				triangles+=ys.count(f)&&ys.count(-1*ff);
				if(f!=ff){
					triangles+=ys.count(ff)&&ys.count(-1*f);
				}
			}
		}

		for(long long y:ys){
			long long tmp = abs(y);
			long long sq = tmp * tmp;
			cout << sq << endl;
			for(long long ff:get_facs(tmp)){
				f = sq/ff;
				cout << ff << " " << f << endl;
				triangles+=xs.count(f)&&xs.count(-1*ff);
				if(f!=ff){
					triangles+=xs.count(ff)&&xs.count(-1*f);
				}
			}
		}

		
		
		if(ys.count(0) || xs.count(0)){
			triangles+=((long long)xc+xd)*((long long)yc+yd);
		}
		cout <<  triangles << endl;
		// cout<< " -> " << ct << endl;

	}
	return 0;
}