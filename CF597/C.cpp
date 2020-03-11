#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int u = 0;
	int n = 0;
	char prev =' ';
	vector<int> runs;
	int urun = 0,nrun=0;
	for(char a:s){
		if (a == 'm' || a == 'w') {
			cout << "0\n";
			return 0;
		}
		if (prev == 'u' && a == 'u'){
			urun++;
		} else {
			if(urun){
				runs.push_back(urun);
			}
			urun=0;
		}
		if (prev == 'n' && a == 'n'){
			nrun++;
		} else {
			if(nrun){
				runs.push_back(nrun);
			}
			nrun=0;
		}
		prev = a;
	}
	
	if(prev == 'u' && urun){
		runs.push_back(urun);
	}
	if(prev == 'n' && nrun){
		runs.push_back(nrun);
	}
	if(runs.size()){
		for(int sec:runs)
			cout << sec << endl;
	} else {
		cout << 1 << endl;
	}
	return 0;
}