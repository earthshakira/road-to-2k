#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,num;
	cin >> n;
	while(n--){
		cin >> num;
		if(num%2){
			num-=3;
			cout << "7";
		}
		while(num>0){
			num-=2;
			cout << "1"; 
		}
		cout << "\n";
	}
	return 0;
}