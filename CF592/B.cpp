
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
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int n;
			string a;
			cin >> n >> a; 
			if(a[0] == '1' || a[n-1] == '1'){
				cout<< 2 * n << endl;
				continue;
			}

			int m = n;
			int ladders = 0;
			for (int i = 0; i < n; ++i)
			{
				if(a[i] == '1'){
					m = max(m,2*(i+1));
					m = max(m,2*(n-i));
					ladders++;
				}
			}
			m = max(m,n+ladders);
			cout << m << endl;
		}
		return 0;
	}
