#include<bits/stdc++.h>

using namespace std;

long long gcd( long long a, long long b )
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

int main(){
	long long n;
	cin >> n;
	long long a = 0;
	double sq = ceil(sqrt(n));
	long long mx = n,ot;
	while(a<=sq){
		a++;
		if(n%a)
			continue;
		ot = n/a;
		if(gcd(a,ot) == 1)
			mx = min(mx,max(a,ot));
	}
	ot = n/mx;
	cout <<  min(mx,ot) << " " << max(mx,ot) << endl;
	return 0;
}