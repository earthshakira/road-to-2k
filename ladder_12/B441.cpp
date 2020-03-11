#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,v;
	cin >> n >> v;
	map<int,long long> mp;
	int a,b;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		mp[a]+=b;
	}

	int day = 3010;
	long long fruits = 0,today=0,remains,yes;
	while(day>0){
		today=0;
		today+=min(v,mp[day]);
		remains = v-today;
		if(remains){
			yes = min(remains,mp[day-1]);
			mp[day-1]-=yes;
			today+=yes;
		}
		day-=1;
		fruits+=today;
	}
	cout << fruits << endl;
	return 0;
}