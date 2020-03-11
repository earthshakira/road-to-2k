#include<bits/stdc++.h>

using namespace std;
long long mod = 1073741824;

int main()
{
	int a,b,n;
	cin >> a >> b >> n;
	int t = a;
	int p =1;
	int md = a%b;
	p%=b;
	stringstream ss;
	int ans = true;
	while(n > 0 && ans){
		ans = false;
		for(int i=9;i>=0;i--){
			if((md*10 + i)%b == 0){
				ss << i;
				ans = true;
				md =(md*10 + i)%b;
				break;
			}
		}
		n--;
	}
	string s = ss.str();
	if(s.length())
		cout << a <<  s; 
	else
		cout << -1; 
	cout << endl;
	return 0;
}