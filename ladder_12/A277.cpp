
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"

	using namespace std;

	int pp(int par[],int a){
		if(par[a] == a){
			return a;
		}
		par[a] = pp(par,par[a]);
		return par[a];
	}

	void uni(int par[],int size[],int a,int b){
		a = pp(par,a);
		b = pp(par,b);
		
		if (a == b)
			return;
		
		if (size[a] >=  size[b]){
			par[b] = a;
			size[a] += size[b];
			size[b] = 0;
		} else {
			par[a] = b;
			size[b] += size[a];
			size[a] = 0;
		}
	}
	int main()
	{
		std::ios::sync_with_stdio(false);
		int n,m,k,t;
		cin >> n >> m;
		
		int par[m+1];
		int size[m+1] = {1};

		for (int i = 0; i <= m; ++i){
			par[i] = i;
			size[i] = 1;
		}
		
		set<int> languages;
		int z = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> k;
			if (k == 0)
				z++;
			int prev = 0;
			while(k--){
				cin >> t;
				languages.insert(t);
				if (prev){
					uni(par,size,t,prev);
				} else {
					prev = t;
				}
			}

		}
		int c = 0;
		for(int i =1;i<=m;i++){
			// cout << i << " " << pp(par,i) << " " << size[pp(par,i)] << endl;
			if(i == pp(par,i) &&  languages.count(i))
				c++;
		}
		if(z == n)
			cout << z << endl;
		else 
			cout << (c - 1 + z) << endl;
		return 0;
	}
