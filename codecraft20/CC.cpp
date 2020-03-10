#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n,m;
	long long p;

	cin >> n >> m >> p;
	
	vector<long long> a(n);
	for (int i = 0; i < n; ++i){
		cin >> a[i];
		a[i]%=p;
	}
	vector<long long> b(m);
	for (int i = 0; i < m; ++i){
		cin >> b[i];
		b[i]%=p;
	}
	int ans = -1;
	for(int i =0;i<m;i++){
		if(b[i])
			ans = i;
		if((b[i]*a[n-1])%p)
			ans = n-1+i;
	}

	for(int i=0;i<n;i++){
		if(a[i])
			ans = i;
		if((b[m-1]*a[i])%p)
			ans = m-1+i;
	}

	if ((a[n-1] * b[m-1])%p){
		ans = n+m-2;
	}
	cout << ans << endl;
	return 0;
}