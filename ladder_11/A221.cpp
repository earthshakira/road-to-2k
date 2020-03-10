#include<bits/stdc++.h>

using namespace std;
void f(vector<int> & arr,int x){
	if (x == 0)
		return; 
	int tmp = arr[x-1];
	arr[x-1] = arr[x];
	arr[x] = tmp;
	f(arr,x-1);
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++){
		arr[i] = i+1;
	}

	f(arr,n-1);
	for(int a:arr)
		cout << a << " ";
	cout << endl;
	return 0;
}