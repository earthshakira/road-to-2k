#include<bits/stdc++.h>

using namespace std;

long long nb,ns,nc,pb,ps,pc,rb,rs,rc,ru;

bool ok(long long num){
	long long b = num*rb - nb,s=num*rs - ns,c = num*rc - nc;
	b  = max(0LL,b);
	s  = max(0LL,s);
	c  = max(0LL,c);
	long long ss = ru - b*pb;
	if (ss < 0)return false;
	ss-= s*ps;
	if (ss < 0)return false;
	ss-= c*pc;
	if (ss < 0)return false;
	return true;
}
int main(){
	string reci;
	map<char,long long> f,inv,cost;
	vector<char> in(3);
	in[0] = 'B';
	in[1] = 'S';
	in[2] = 'C';

	int t = 0;
	cin >> reci;
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> ru;
	for(char a:reci)
		f[a]++;
	rb = f['B'];
	rs = f['S'];
	rc = f['C'];

	long long l=0,r = ru+101,mid;
	long long ans = 0;
	while(l<=r){
		mid = (l + r)/2;
		if (ok(mid)){
			ans = mid;
			l = mid + 1;
		} else 
			r = mid - 1;
	}

	cout << ans << endl;
	return 0;
}