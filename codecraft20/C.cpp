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
	if (n <= m){
		swap(n,m);
		swap(a,b);
	}
	vector<long long> bd(b.begin(),b.end());
	int ans = -1;
	for(int i=0;i<m;i++){
		b[i]*=a[0];
		if(b[i]%p){
			ans = i;
			break;
		}
	}
	if (ans > -1){
		cout << ans << endl;
		return 0;
	}

	for(int i =1;i<n;i++){
		for(int j=0;j<m-1;j++){
			b[j]=(b[j+1] + (bd[j]*a[i]))%p;
			if(b[j]){
				ans = (i+j);
				break;
			}
		}
		if(ans > -1)
			break;
	}
	for(int i=m-1;i>0;i++){
		if (b[i]){
			ans = n+i;
			break;
		}
	}
	cout <<  << endl;
	return 0;
}