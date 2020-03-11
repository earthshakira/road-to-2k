#include<bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;

long long visit(vector<long long> cache[], long long n,long long k,long long d,bool taken){
	if (n<=0)
		return taken && n == 0;

	if (cache[taken][n] > -1){
		// cout << "c";
		return cache[taken][n];
	}

	long long ct = 0;
	for(long long i =1;i<=k;i++){
		ct = (ct + visit(cache,n-i,k,d,taken||(d<=i)))%mod;
	}
	cache[taken][n] = ct;
	return ct;
}

int main(){
	long long n,k,d;
	cin >> n >> k >> d;
	vector<long long> cache[] = {vector<long long>(101,-1),vector<long long>(101,-1)};
	cout << visit(cache,n,k,d,false) << endl;
	return 0;
}