#include<bits/stdc++.h>

using namespace std;

int main(){
	int T=1;
	int n,d,m;
	for(int t=0;t<T;t++){
		cin >> n >> m >> d;
		vector<int> v(m),b(n+1);
		int sum=0;
		for (int i = 0; i < m; ++i){
			cin >> v[i];
			sum+=v[i];
		}
		int pos = 0,ind = 1;
		bool ans = true,rfill = false;
		while(pos<=n){
			pos += d;
			if((pos+sum) > n){
				pos = n;
				for(int j = m-1;j>=(ind-1);j--){
					while(v[j]--)
						b[pos--]=j+1;
				}
				break;
			}
			if(ind <= m){
				for(int j=0;j<v[ind-1];j++)
					b[pos+j]=ind;
				pos+= v[ind-1] - 1;
				sum-= v[ind-1];
				ind++;
			} else if (pos <= n){
				ans = false;
				break;
			}
		}
		if(ans){
			cout << "YES" << endl;
			for (int i = 1; i <= n; ++i)
				cout << b[i] << " ";
			cout << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}