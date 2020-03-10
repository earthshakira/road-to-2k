#include<bits/stdc++.h>

using namespace std;

long long cells = 0;

bool solve(vector<vector<int>> & grid,int n,int m,int x,int y,int dir,long long count){
	if (x >= n || y>=m || x < 0 || y < 0 || grid[x][y] == -1 || grid[x][y] == 1)
		return false;

	if(count == cells)
		return true;
	grid[x][y] = 1;
 	int sx=x,sy=y,sd,rx=x,ry=y,rd;
	switch(dir){
		case 0:
			sy+=1;
			rx+=1;
		break;
		case 1:
			sx+=1;
			ry-=1;
		break;
		case 2:
			sy-=1;
			rx-=1;
		break;
		case 3:
			sx-=1;
			ry+=1;
		break;
	}
	sd = dir;
	rd = (dir+1)%4;

	if (solve(grid,n,m,sx,sy,sd,count+1)){
		return true;
	}
	if (solve(grid,n,m,rx,ry,rd,count+1)){
		return true;
	}
	grid[x][y] = 0;
	return false;
}
int main(){
	int m,n,q,x,y;
	cin >> n >> m >> q;
	vector<vector<int>>	grid(n);
	cells = ((long long)m)*n - q;
	for (int i = 0; i < n; ++i)
	{
		vector<int> v(m,0);
		grid[i] = v;
	}
	for (int i = 0; i < q; ++i)
	{
		cin >> x >> y;
		grid[x-1][y-1]=-1;
	}

	cout << (solve(grid,n,m,0,0,0,1) ? "Yes" : "No") << endl;
	return 0;
}