#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,long long>> p(n);
	int l= INT_MAX,r=INT_MIN;
	for(int i=0;i<n;i++){
		cin >> p[i].first;
		l = min(p[i].first,l);
		r = max(p[i].first,r);
	}

	for(int i=0;i<n;i++)
		cin >> p[i].second;

	sort(p.begin(), p.end());
	priority_queue<long long> pq,nq;
	int i=0;
	long long s=0,c=0;
	while(i<n){
		int j=i;
		while(j<n&&p[j].first == p[i].first){pq.push(p[j].second);s+=p[j++].second;}
		s-=pq.top();
		pq.pop();
		c+=s;
		i=j;
	}
	while(pq.size()){
		s-=pq.top();
		pq.pop();
		c+=s;
	}
	cout << c << endl;
	return 0;
}