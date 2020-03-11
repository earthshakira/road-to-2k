#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--){
		int a,b,c,aa,bb,cc,m=INT_MAX;
		cin >> a >> b>> c;

		for(int i=1;i<=20000;i++){
			for(int j = i;j<=20000;j+=i){
				for(int k = j;k<= 20000;k+=j){
					int cost = abs(i-a) + abs(j-b) + abs(k-c);
					if(cost < m){
						m = cost;
						aa = i;
						bb = j;
						cc = k;
					}
				}
			}
		}
		cout << m << endl;
		cout << aa << " " << bb << " "<< cc << endl;
	}
	return 0;
}