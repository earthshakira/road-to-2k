#include<bits/stdc++.h>

using namespace std;

void smin(vector<int> & arr, int n) 
{ 
	int k = n-1;
    
    for (int i = 0; i < n && k > 0; ++i) { 
        // Here, indexPositionition is set where we 
        // want to put the current largest integer 
        int indexPosition = i; 
        for (int j = i + 1; j < n; ++j) { 
  
            // If we exceed the Max swaps 
            // then break the loop 
            // Find the maximum value from i+1 to 
            // max k or n which will replace 
            // arr[indexPosition] 
            if (arr[j] < arr[indexPosition]) 
                indexPosition = j; 
        } 
  
        // Swap the elements from Maximum indexPosition 
        // we found till now to the ith index 
        for (int j = indexPosition; j > i && k > 0; --j) {
            swap(arr[j], arr[j - 1]);k--; 
        }
    } 
} 


int main(){
	int T;
	int n;
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		smin(v,n);
		for (int i = 0; i < n; ++i)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}