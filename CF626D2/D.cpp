#include<bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n,mid,side,ans=0;
	cin >> n;
	mid=n-3;
	side=n-2;
	if(n>3){
		ans+=(9*pow(4,n-3)*(n-3));
		// cout << ans << endl;
	}
	ans+=6*pow(4,n-2);
	cout << ans << endl	;
	return 0;
}

/*
4 -> 6

^^^^^^
3(4)3
(4)34
43(4)

5 -> 8
^^^^^^^ ^     = 
[3(4)3]4 * 2 = 288
[(4)3]44 * 2 = 

*/