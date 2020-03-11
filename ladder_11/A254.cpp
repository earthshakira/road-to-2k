#include<bits/stdc++.h>

using namespace std;
long long mod = 1073741824;

int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 	
 	int n,t;
 	cin >> n;
 	map<int,vector<int>> mp;
 	for(int i = 0;i<2*n;i++){
 		cin >> t;
 		mp[t].push_back(i+1);
 	}
 	stringstream ss;
 	for(auto it:mp){
 		if (it.second.size()%2){
 			cout << -1 << endl;
 			return 0;
 		}
 		int ind=0;
 		for(auto i:it.second){
 			ss << i << " ";
 			if((ind++)%2)
 				ss << "\n";
 		}
 	}
 	cout << ss.str();
	return 0;
}