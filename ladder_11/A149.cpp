#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> growth(12);
	for(int i=0;i<12;i++)
		cin >> growth[i];
	sort(growth.rbegin(), growth.rend());
	int months = 0;
	for(int k:growth){
		if(n<=0)
			break;
		n-=k;
		months++;
	}
	cout << (n > 0 ? -1 : months) << endl;
	return 0;
}