
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
		ll p;
		ll start_time;
		cin >> n >> p;
		vector<pair<long long,int>> peeps(n);
		vector<long long> op(n);
		priority_queue<int,vector<int>,greater<int>> pq;
		for (int i = 0; i < n; ++i)
		{
			cin >> start_time;
			peeps[i] = {start_time,i};
		}

		sort(peeps.begin(), peeps.end());
		
		long long timestamp=peeps[0].first;
		int ptr = 0;
		int peep;
		while(ptr < n){
			while(ptr < n && peeps[ptr].first <= timestamp ){
				pq.push(peeps[ptr].second);
				ptr++;
			}
			if(pq.empty()){
				timestamp = peeps[ptr].first;
				continue;
			}
			peep = pq.top();
			pq.pop();
			timestamp+=p;
			op[peep] = timestamp;
		}

		while(!pq.empty()){
			peep = pq.top();
			pq.pop();
			timestamp+=p;
			op[peep] = timestamp;
		}

		for (int i = 0; i < n; ++i)
		{
			cout << op[i] << " ";
		}

		return 0;
	}
