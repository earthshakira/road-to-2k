#include<bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;

long long ncr(long long n,long long r){
	if (n<=0)
		return 1;
	long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
            
            long long m = __gcd(p, k); 
            p /= m; 
            k /= m;
            p%=mod;
            n--;
            r--;
        } 
    } 
    else
        p = 1; 
    return p%mod;
}

int main(){
	int n,m;
	cin >> n >> m;
	cout << ncr(n + 2*m - 1,2*m) << endl;
	return 0;
}