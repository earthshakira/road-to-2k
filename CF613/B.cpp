#include<bits/stdc++.h>

using namespace std;

int main(){
	int T,n,p;
	cin >> T;
	while(T--){
		cin >> n;
		long long s1=0,msum=INT_MIN,msum_last=INT_MIN,running_sum=0,running_sum_last=0,pp=0;
		vector<int> v(n);
		for (int i = 0; i < n; ++i){
			cin >> p;
			s1+=p;
			
			if((n-i) > 1){
				running_sum+=p;
				msum = max(msum,running_sum);
				if(running_sum < 0)
					running_sum = 0;
			}
			
			if(i){
				running_sum_last+=p;
				msum_last = max(msum_last,running_sum_last);
				if(running_sum_last < 0)
					running_sum_last = 0;
			}
			
		}

		cout << ((s1 > msum && s1 > msum_last)  ? "YES":"NO") << endl;
	}
	return 0;
}