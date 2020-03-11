#include<bits/stdc++.h>
#define x first
#define y second

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		string a,b,c;
		cin >> a >> b >> c;
		int n = a.length(),ans=true;
		for(int i =0;i<n;i++){
			if (a[i] == c[i] || b[i] == c[i])
				continue;
			ans = false;
			break;
		}
		if(ans)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;

	}
	return 0;
}