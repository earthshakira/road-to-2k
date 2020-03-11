#include<bits/stdc++.h>

using namespace std;

int happiness(int g[5][5],vector<int> & v){
	int h = 0;
	for(int j=0;j<5;j++)
	for(int i =j+1;i<5;i+=2){
		h += g[v[i]][v[i-1]] + g[v[i-1]][v[i]];
	}
	return h;
}

int main(){
	vector<int> n;
	int g[5][5];

	for(int i =0;i<5;i++){
		for(int j = 0;j<5;j++)
			cin >> g[i][j];
		n.push_back(i);
	}
	int h = 0;
	do{
		h = max(h,happiness(g,n));
	}while(next_permutation(n.begin(), n.end()));
	cout << h << endl;
	return 0;
}