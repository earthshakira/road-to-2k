#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int mat[n][n];
	int ind = 1;
	for (int i = 0; i < n; ++i){
		if(i%2){
			for (int j = n-1; j >= 0; --j)
				mat[j][i] = ind++;	
		} else {
			for (int j = 0; j < n; ++j)	
				mat[j][i] = ind++;
		}
	}

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j)	
			cout << mat[i][j] << " ";
		cout << endl;
	}

	return 0;
}