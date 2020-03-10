
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
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		vector<bool> b(n,false);
		b[0]=true;
		b[1]=true;
		int m = min((int)v.size(),2);
		int curr = 2;
		for (int i = 2; i < n; ++i)
		{
			b[i] = (v[i] == (v[i-1] + v[i-2]));
			if(b[i] && b[i-1]){
				curr++;
			} else if(b[i]){
				curr = 3;
			} else {
				curr = 2;
			}
			m = max(m,curr);
		}

		cout << m;
		return 0;
	}
