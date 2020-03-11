#include<bits/stdc++.h>
#define x first
#define y second

using namespace std;

long long nn(long long n){
	long long ans = 0;
	if (n%2){
		ans = ((n+1)/2)*n;
	} else {
		ans = (n/2)*(n+1);	
	}
	return ans;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		long long m,n,z,min_z;
		cin >> n >> m;
		z = n-m;
		if (m==0){
			cout << 0 << endl;
			continue;
		}
		long long zs = z/(m+1),rem=z%(m+1);
		if (z <= (m+1)){
			cout << nn(n) - z<< endl; 
			continue;
		}

		long long groups = m+1;
		long long ans = nn(n) - (groups - rem)*nn(zs) - rem*(nn(zs+1));
		cout << ans << endl;
	}
	return 0;
}