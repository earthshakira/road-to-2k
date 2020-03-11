
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	using namespace std;

	ll gcd(ll a, ll b, ll & x, ll & y) {
	    if (a == 0) {
	        x = 0;
	        y = 1;
	        return b;
	    }
	    ll x1, y1;
	    ll d = gcd(b % a, a, x1, y1);
	    cout << x1 << " " << y1 << endl;
	    x = y1 - (b / a) * x1;
	    y = x1;
	    return d;
	}


	int main()
	{
		std::ios::sync_with_stdio(false);
		ll n,p,w,d;
		cin >> n >> p >> w >> d;
		if(p == 0){
			cout << "0 0 "<<n<<endl;
			return 0;
		}
		ll x,y,dd;
		ll wins,draws,losses;
		dd = gcd(w,d,x,y);
		if(p%dd){
			cout << "-1\n";
			return 0; 
		}

		cout << x << y << endl;

		x*=(p/(dd*w));
		y*=(p/(dd*d));
		
		if (x+y > n){
			gcd(d,w,x,y);
			x*=(p/(dd*w));
			y*=(p/(dd*d));
			losses = (n - wins - losses);
		} else {
			losses = n - x - y;
		}

		if(x < 0 || y < 0){
			cout << -1 << endl;
			return 0;
		}
		cout << x << " " << y << " " << (n - x - y) << endl;

		return 0;
	}
