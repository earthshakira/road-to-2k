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
	int main()
	{
		std::ios::sync_with_stdio(false);
		int n,a,e=0,o=0;
		cin >> n;
		ll sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			sum+=a;
			o+=(a%2);
			e+=(1-a%2);
		}
		if (sum%2){
			cout << o << endl;
		} else {
			cout << e << endl;
		}
		return 0;
	}
