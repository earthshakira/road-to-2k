#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int a,b,c;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> a >> b >> c;
		int ta=0,tb=0;
		ta = min(b/2,a)*3;
		if(b >= c/2){
			tb+=(c/2)*3;
			tb+=min((b-c/2)/2,a)*3;
		} else {
			tb = min(b,c/2)*3;
		}
		cout << max(ta,tb) << endl;
	}
	return 0;
}