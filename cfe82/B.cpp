#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	long long n,g,b;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n >> g >> b;
		long long pav = n/2 + n%2,d=g+b;
		long long days = (pav/g)*d + pav%g;
		if (pav%g == 0)
			days -=b;
		
		cout << max(days,n) << endl; 

	}
	return 0;
}