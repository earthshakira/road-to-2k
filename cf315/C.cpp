#include<bits/stdc++.h>

using namespace std;

int gf(int a){
	if (a <= 14)
		return 2;
	int lim = ceil(sqrt(a));
	for (int i = 2; i <= lim; ++i)
	{
		if (a%i)
			continue;
		return i;
	}
	return 1;
}
int main(){
	int T;
	int n;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n;
		int f = gf(n);
		int ans = false;
		for(int i = f+1;i<= ceil(sqrt(n)) && f > 1;i++){
			if (n%i || (n/i)%f)
				continue;
			int tm = ((n/i)/f);
			if( tm > 1 && f-i && i-tm && tm - f){
				ans = true;
				cout << "YES\n" << f << " " << i << " " << tm << endl;
				break;	
			}	
		}
		if(!ans)
			cout << "NO\n";
	}
	return 0;
}