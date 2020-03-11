#include<bits/stdc++.h>

using namespace std;

struct node{
	int d;
	node *next[2];
};
typedef struct node node;


node *nn(){
	node *n = new node();
	n->next[0] = NULL;
	n->next[1] = NULL;
	return n;
}

void create(node* ptr,int a,int i){
		
	
	if (i < 0){
		ptr->d = a;
		return;
	}
	int d = (a>>i)&1;
	// cout << a <<" " << i << " " << d << endl;  
	if(ptr->next[d] == NULL)
		ptr->next[d] = nn();
	create(ptr->next[d],a,i-1);
}

int solve(node* ptr,int i){
	if(ptr == NULL || i<0)
		return 0;

	if(ptr->next[0] == NULL){
		return solve(ptr->next[1],i-1);
	}

	if(ptr->next[1] == NULL){
		return solve(ptr->next[0],i-1);
	}
	return min(solve(ptr->next[0],i-1),solve(ptr->next[1],i-1)) + (1<<i);
}
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	int m = 0;
	
	for (int i = 0; i < n; ++i){
		cin >> v[i];
		m = max(m,v[i]);
	}
	
	int digs = ceil(log2(m));
	node* root = nn();
	
	for(int num:v)
		create(root,num,digs);

	cout << solve(root,digs) << endl;
	return 0;
}