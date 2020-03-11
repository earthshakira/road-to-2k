#include<bits/stdc++.h>

using namespace std;
long long mod = 1073741824;

int getD(long long dd,map<long long,int> & d){
	int div = 0;
	int i=1;
	for(;i * i <dd;i++)
		div += (dd%i == 0);
	div*=2;
	if (dd%(i*i) == 0)
		div++;
	d[dd] = div;
	return div;
}
int main()
{
	int a,b,c;
	map<long long,int> d;
	cin >> a >> b >> c;
	long long s = 0,dd;
	for(int i=1;i<=a;i++)
		for (int j = 1; j <= b; ++j)
			for (int k = 1; k <=c ; ++k){
				dd = i*j*k;
				dd = d.count(dd) ? d[dd] : getD(dd,d);
				s+=dd;
				s%=mod;
			}
	cout << s << endl;
			
	return 0;
}