 
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
 		int t;
 		vector<int> neg,pos,zero;
 		for (int i = 0; i < n; ++i)
 		{
 			cin >> t;
 			if (t == 0){
 				zero.push_back(t);
 			} else if (t < 0){
 				neg.push_back(t);
 			} else {
 				pos.push_back(t);
 			}
 		}

 		if (!pos.size()){
 			pos.push_back(neg.back());
 			neg.pop_back();
 			pos.push_back(neg.back());
 			neg.pop_back();
 		}

 		if (neg.size()%2 == 0){
 			zero.push_back(neg.back());
 			neg.pop_back();
 		}
 		cout << neg.size() << " ";
 		for (int a:neg)
 		{
 			cout << a << " ";
 		}
 		cout << endl;
 		cout << pos.size() << " ";
 		for (int a:pos)
 		{
 			cout << a << " ";
 		}
 		cout << endl;
 		cout << zero.size() << " ";
 		for (int a:zero)
 		{
 			cout << a << " ";
 		}
 		cout << endl;
 		return 0;
 	}
 