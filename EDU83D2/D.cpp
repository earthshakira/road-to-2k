#include<bits/stdc++.h>

using namespace  std;
long long MOD = 998244353;

  
// C function for extended Euclidean Algorithm 
long long gcdExtended(long long a, long long b, long long *x, long long *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    long long x1, y1; // To store results of recursive call 
    long long gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 

long long modInverse(long long a) 
{ 
    long long x, y; 
    long long g = gcdExtended(a, MOD, &x, &y); 
    if (g != 1) 
        return -1;
    else
    { 
        // m is added to handle negative x 
        long long res = (x%MOD + MOD) % MOD; 
    	return res;
    } 
} 

long long nCr(long long n, long long r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
            n--; 
            r--;
            p%=MOD;
            k%=MOD;
        } 
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1;
  	p= (p * modInverse(k))%MOD;
    // if our approach is correct p = ans and k =1 
    return p;
} 
  

long long pp(long long p,long long i){
	long long ans = 1;
	while(i){
		if(i&1)
			ans = (ans*p)%MOD;
		p = (p*p)%MOD;
		i/=2;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long m,n;
	cin >> n >> m;
	// array of size n;
	//
	long long sets = pp(2LL,n-3),ncr=nCr(m,n-1)%MOD;
	cout << (((ncr*sets)%MOD)*(n-2))%MOD << endl;
	return 0;
}