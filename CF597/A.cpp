#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd( ll a, ll b )
{
	if(b==0)
	{
	     return a;
	}
	else
	{
	     return gcd( b, a%b );
	}
}

ll lcm (ll a, ll b)
{
	return (a*b)/gcd(a,b);
}

int main(){
	int T;
	int a,b;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> a >> b;
		if(gcd(a,b) > 1)
			cout << "Infinite\n";
		else
			cout << "Finite\n";
	}
	return 0;
}