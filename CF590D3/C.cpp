#include<bits/stdc++.h>
#define x first
#define y second 

using namespace std;

int main(){
	int n,q;
	cin >> n >>q;
	vector<pair<int,int>> tog(q);
	vector<bool> v[2];
	vector<bool> t(n),d(n);
	v[0] = t;
	v[1] = d;
	for (int i = 0; i < q; ++i){
		cin >> tog[i].x >> tog[i].y;
		tog[i].x--;
		tog[i].y--;
	}
	
	
	map<pair<int,int>,int> blocked;
	int blocks = 0;
	for(auto pt:tog){
		int rw = 1 - pt.x,col;
		for(int i=-1;i<=1;i++){
			col = pt.y + i;

			if(col >=0 && col<n && v[rw][col]){
				if(v[pt.x][pt.y]){
					blocked[pt]--;
					blocked[{rw,col}]--;
					blocks--;
				} else {
					blocked[pt]++;
					blocked[{rw,col}]++;
					blocks++;
				}
			}
		}
		// cout << blocked[pt] << " "<< blocks << endl;
		v[pt.x][pt.y] = !v[pt.x][pt.y];
		if(blocks > 0 || v[0][0] || v[1][n-1])
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}

	return 0;
}