
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
	
	bool valid(int a,int n){
		return a>=0 && a < n;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int n,m;
		cin >> n >> m;
		string grid[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> grid[i];
		}
		
		string k="WP";
		int c[] = {0,0};
		for(int i=0;i<n;i++)
			for (int j = 0; j < m; ++j)
			{
				if (grid[i][j] == '.')
					continue;
				int t = (grid[i][j] == 'P');
				if (valid(i-1,n) && grid[i-1][j] == k[1-t]){
					c[t]+=1;
				} else if (valid(i+1,n) && grid[i+1][j] == k[1-t]){
					c[t]+=1;
				} else if (valid(j- 1,m) && grid[i][j-1] == k[1-t]){
					c[t]+=1;
				} else if (valid(j+1,m) && grid[i][j+1] == k[1-t]){
					c[t]+=1;
				}
			}
		cout << min(c[0],c[1])<<endl;
		return 0;
	}
		