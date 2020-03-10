
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
		int x;
		int f=0,z=0;
		cin >> n;
		while(n--){
			cin >> x;
			if (x == 5)
				f++;
			else z++;
		}
		
		while((f*5)%9){
			f--;
		}
		if(f && z){
			while(f--)cout << 5;
			while(z--)cout << 0;
			cout << endl;
		}else if (z){
			cout << "0\n";
		}else{
			cout << "-1\n";
		}
		return 0;
	}
