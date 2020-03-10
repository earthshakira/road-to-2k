
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
		long long l,r,rep=0,num=4,tmp,p,num_digits=1,td;
		long long sum = 0;
		cin >> l >> r;
		bool addnl;
		while(l<=r){
			tmp = rep;
			p=1;
			num = 0;
			td = num_digits;
			addnl = true;
			while(tmp){
				if(tmp%2){
					num+=7*p;
				}else{
					num+=4*p;
					addnl=false;
				}
				p*=10;
				tmp/=2;
				td--;
			}
			// cout << num_digits << " " << rep << " ";
			while(td--){
				addnl=false;
				num+=4*p;
				p*=10;
			}
			if(addnl){
				num_digits++;
				rep=0;
			}else {
				rep+=1;
			}
			// cout << num << " " ;//<< rep<< endl;
			
			if(num<l)
				continue;
			if(num>=r){
				sum += (r-l+1)*num;
			} else {
				sum += (num-l+1)*num;
			}
			l = num+1;
		}
		cout << sum << endl;
		return 0;
	}
