
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

	void computeLPSArray(string pat, int M, int* lps) 
	{ 
	    // length of the previous longest prefix suffix 
	    int len = 0; 
	  
	    lps[0] = 0; // lps[0] is always 0 
	  
	    // the loop calculates lps[i] for i = 1 to M-1 
	    int i = 1; 
	    while (i < M) { 
	        if (pat[i] == pat[len]) { 
	            len++; 
	            lps[i] = len; 
	            i++; 
	        } 
	        else // (pat[i] != pat[len]) 
	        { 
	            // This is tricky. Consider the example. 
	            // AAACAAAA and i = 7. The idea is similar 
	            // to search step. 
	            if (len != 0) { 
	                len = lps[len - 1]; 
	  
	                // Also, note that we do not increment 
	                // i here 
	            } 
	            else // if (len == 0) 
	            { 
	                lps[i] = 0; 
	                i++; 
	            } 
	        } 
	    } 
	} 

	int main()
	{
		int n,m;
		cin >> n >> m;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << ((i*m)^((j)*m)) << " ";
			}
			cout << endl;
		}
		return 0;
	}
