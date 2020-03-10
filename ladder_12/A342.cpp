
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
		int n,t;
		cin >> n;
		int f[8]={0};
		for (int i = 0; i < n; ++i)
		{
			cin >> t;
			f[t]++;
		}
		tuple<int,int,int> p[] = {{1,2,4},{1,2,6},{1,3,6}};
		vector<int> ans;
		for (int i = 0; i < 3; ++i)
		{
			while(f[get<0>(p[i])] && f[get<1>(p[i])] && f[get<2>(p[i])]){
				f[get<0>(p[i])]--;
				f[get<1>(p[i])]--;
				f[get<2>(p[i])]--;
				ans.push_back(i);
			}
		}

		if(ans.size() != n/3){
			cout << -1 << endl;
		} else {
			for (int t:ans)
			{
				cout << get<0>(p[t]) << " " << get<1>(p[t]) << " " << get<2>(p[t]) << endl;
			}
		}
		return 0;
	}
