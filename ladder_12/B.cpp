#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	int n;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n;
		string a,b;
		cin >> a >> b;
		map<char,int> fa,fb,ft;
		for(char aa:a){
			fa[aa]++;
			ft[aa]++;
		}

		for(char aa:b){
			fb[aa]++;
			ft[aa]++;
		}

		for(int i =0;i<=26;i++){
			
		}
	}
	return 0;
}