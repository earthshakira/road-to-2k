
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
		string a;
		cin >> a;
		int state = 0;
		for (int i = 0; i < a.size(); ++i)
		{
			if (state == 0){
				if(a[i] == '1')
					state = 1;
				else break;
			} else if (state == 1){
				if(a[i] == '4')
					state = 14;
				else if (a[i] != '1'){
					state = 0;
					break;
				}
			} else if (state == 14) {
				if(a[i] == '1'){
					state = 1;
				} else if (a[i] == '4')
					state = 144;
				else {
					state = 0;
					break;
				}
			} else if (state == 144) {
				if(a[i] == '1')
					state = 1;
				else{
					state = 0;
					break;
				}
			}
		}
		cout << (state ? "YES" : "NO") << endl;
		return 0;
	}
