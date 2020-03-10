#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> T;
	for(int t=0;t<T;t++){
		int n;
		string s;
		cin >> n >> s;
		pair<string,int> op = {s,1};
		for(int i=2;i<s.length();i++){
			string pre=s.substr(0,i-1);
			string remainder = s.substr(i-1,s.length()-i+1);
			if(remainder.length()%2){
				reverse(pre.begin(),pre.end());
			}
			remainder+=pre;
			if(remainder < op.first){
				op = {remainder,i};
			}
			// cout << i << " " << remainder << endl;
		}
		string ss = s;
		reverse(ss.begin(),ss.end());
		if (ss < op.first){
			op = {ss,n};
		}
		cout << op.first << endl;
		cout << op.second << endl;
	}
	return 0;
}