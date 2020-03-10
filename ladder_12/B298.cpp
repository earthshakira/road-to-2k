#include<bits/stdc++.h>

using namespace std;

int main(){
	long N,sx,sy,ex,ey;
	cin >> N >> sx >> sy >> ex >> ey;
	string s;
	cin >> s;
	char d1=' ',d2=' ';
	long dx = abs(ex - sx),dy = abs(ey-sy);
	if (ex > sx){
		d1 = 'E';
	} else if (ex < sx){
		d1 = 'W';
	}

	if(ey > sy){
		d2 = 'N';
	} else if (ey<sy){
		d2 = 'S';
	}
	int time = 0;
	for(char d:s){
		if (d == d1)
			dx--;

		if (d == d2)
			dy--;
		
		time++;
		if(dx <= 0 && dy <=0)
			break;
	}

	if(dx > 0 || dy > 0){
		cout << -1 << endl; 
	} else {
		cout << time << endl;
	}
	return 0;
}