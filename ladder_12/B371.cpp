#include<bits/stdc++.h>

using namespace std;
long long moves[] = {2,3,5};
long long remains;
vector<long long> get_moves(long long t){
	int mov = 0;
	vector<long long> ans;
	for(int i=0;i<3;i++){
		mov = 0;
		while(t > 1 && t%moves[i]==0){
			t/=moves[i];
			mov++;
		}
		ans.push_back(mov);
	}
	ans.push_back(t);
	return ans;
}


int main(){
	long long a,b;
	cin >> a >> b;
	vector<long long> aa,bb;
	aa = get_moves(a);
	bb = get_moves(b);
	if(aa[3] != bb[3])
		cout << -1 << endl;
	else {
		int moves =0;
		for (int i =0;i<3;i++)
			moves+=abs(aa[i] - bb[i]);
		cout << moves << endl;
	}
	return -1;
}