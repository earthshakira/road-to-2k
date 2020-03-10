#include<bits/stdc++.h>

using namespace std;

int getparent(int a,map<int,int> & parents){
	if(parents.count(a) == 0 || parents[a] == a){
		return a;
	}
	parents[a] = getparent(parents[a],parents);
	return parents[a];
}

void uni(int a,int b,map<int,int> & parents){
	a = getparent(a,parents);
	b = getparent(b,parents);
	if (a == b)
		return;
	parents[min(a,b)] = parents[max(a,b)];
}

int main(){
	int n;
	int x;
	cin >> n >> x;
	int mex = 0;
	int pre = 0;
	map<int,int> mp,parent;
	int a;
	for(int i =0;i<n;i++){
		cin >> a;
		if(parent[a] == 0){
			parent[a] = a;
		}
		mp[a]++;
		if(a && mp[a-1]){
			uni(a,a-1,parent);
		}
		if (a && mp[a+1]){
			uni(a,a+1,parent);
		}

		while(mp[mex]){
			mex++;
		}
		int mmex = mex;
		if (mp[mex - x] > 1){
			mmex = mex+1;
		} else if (mp[mex + x])
			mmex = mex+1;
		if(mp[mmex])
			mmex = getparent(mmex,parent);
		
		cout << mmex << endl;
	}
	return 0;
}