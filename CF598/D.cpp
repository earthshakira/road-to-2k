#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	long long k;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n >> k;
		string a;
		cin >> a;
		int l=0,r=0;
		while(r<n){
			if(a[r]=='1'){
				r++;
				continue;
			}
			while(l<=r && a[l]=='0')l++;
			
			if(l<r){
				if((r-l) <= k){
					k-=(r-l);
					a[l]='0';
					a[r]='1';
				} else {
					if(k>0){
						a[r-k]='0';
						a[r] = '1';
					}
					break;
				}
			}
			r++;
		}

		cout<< a << "\n";
	}
	return 0;
}