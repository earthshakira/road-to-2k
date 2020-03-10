#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<unsigned int> v(n);
	unsigned int mx=0,last_bit = 0,mm;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		mx = max(v[i],mx);
	}
	mm = mx;
	while(mx){
		mx/=2;
		last_bit++;
	}

	unsigned int ans=0U;
	for(unsigned int i = 0;i<last_bit;i++){
		bool one = false,zero = false,s;
		for(unsigned int num:v){
			s = ((num>>i)&1);
			one = one | s;
			zero = zero | !s;
		}
		// cout << i << " " << one << " " << zero << endl;

		if((zero && one) == false){
			if(one)
				ans = ans | (1U<<i);
		} else {
			ans = ans | (1U<<i);
		}
		
	}
	unsigned int min_xor = ans ^ v[0];
	for(auto num:v){
		min_xor = max(min_xor, ans ^ num);
	}
	cout << min(min_xor,mm) << endl;
	
	return 0;
}