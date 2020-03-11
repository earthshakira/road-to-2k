#include<bits/stdc++.h>

using namespace std;

long long moves[] = {44,47,74,77};
long long subs[4][2] ={{2,0},{1,1},{1,1},{0,2}};

long long get(long long num,long long current,long long pow,int m[2]){
	if(m[0] < 0 || m[1] < 0)
		return 0;
	if (pow == 0)
		return (current < num)? 0 : current;
	long  long t,tc;
	for(int i =0;i<4;i++){
		tc = current + moves[i] * pow;
		int tm[] = {m[0] - subs[i][0],m[1] - subs[i][1]};
		t = get(num,tc,pow/100,tm);
		if(t > 0)
			return t;
	}
	if (current == 0){
		current = 4;
		while(m[0]--)
			current = current*10+4;
		while(m[1]--)
			current = current*10+7;
		current=current*10+7;
		return current;
	}
	return 0;
}
int main(){
	long long n,t,p;
	cin >> n;
	if (n <= 47){
		cout << 47 << endl;
		return 0;
	}
	t = n;
	p = 1;
	int d=0;
	while(t){
		t/=10;
		p*=10;
		d++;
	}
	p/=100;
	if(d%2)
		p*=10;
	int sub[] = {d/2+d%2,d/2+d%2};
	// cout << sub[0] << sub[1] << endl;
	cout << get(n,0,p+t%2,sub) << endl;
	return 0;
}