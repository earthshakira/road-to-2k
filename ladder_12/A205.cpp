
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
		int n,c;
		cin >> n;
		int freq = 1;
		int min;
		int ind = 1;
		cin >> min;
		for (int i = 1; i < n; ++i)
		{
			cin >> c;
			if (c < min){
				min = c;
				freq = 1;
				ind = i+1;
			} else if (c == min){
				freq++;
			}	
		}

		if(freq > 1){
			cout << "Still Rozdil\n";
		} else {
			cout << ind << endl;
		}
		return 0;
	}
