#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t=0;t<T;t++){	
		int n, a,b,c;
		cin >> n >> a >> b >> c;
		map<char,int> mp;
		int wins  = n/2 + n%2;
		string st;
		cin >> 	st;

		for (int i = 0; i < n; ++i)
		{
			switch(st[i]){
				case 'R':
					if(b){
						b--;
						wins--;
						st[i]='P';
					} else
						st[i] = 'X';
				break;
				case 'P':
					if(c){
						c--;
						wins--;
						st[i]='S';
					} else
						st[i] = 'X';
				break;
				case 'S':
					if(a){
						a--;
						wins--;
						st[i]='R';
					} else
						st[i] = 'X';
				break;
			}
		}

		if(wins<=0){
			for(int i =0;i<n;i++){
				if(st[i] == 'X'){
					if(a){
						st[i]= 'R';
						a--;
					} else if (b) {
						st[i] = 'P';
						b--;
					} else if (c) {
						st[i] = 'S';
						c--;
					}
				}
			}
			cout << "YES\n";
			cout << st << "\n";
		} else {
			cout << "NO\n";
		}

	}
	return 0;
}