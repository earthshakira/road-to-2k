
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
	if (a.size() == 1){
		cout << 0 << endl;
		return 0;
	}
	long long spells = 1,num = 0,tmp;
	for (char x:a)
	{
		num+=(x-'0');
	}
	
	while(num/10){
		spells+=1;
		tmp = 0;
		while(num){
			tmp+=(num%10);
			num/=10;
		}
		num = tmp;
	}
	cout << spells;
	return 0;
}
