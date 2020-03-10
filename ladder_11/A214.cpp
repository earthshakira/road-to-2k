#include<bits/stdc++.h>

using namespace std;

int main(){
	int m,n,ct = 0,b;
	cin >> n >> m;
	for(int i=0;i*i<=n;i++){
		b = (n-i*i);
		if(b*b + i == m){
			ct++;
		}
	}
	cout << ct << endl;
	return 0;
}