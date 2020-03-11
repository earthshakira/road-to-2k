#include<bits/stdc++.h>

using namespace std;
int mod = 1073741824;

int main()
{	
	std::ifstream in("input.txt");
	std::ofstream out("output.txt");
	int b = 0,g = 0;
	in >> b >> g;
	string s;
	char B='B',G='G';
	
	if (g>b){
		swap(g,b);
		swap(B,G);
	}

	while(b > 0 || g > 0){
		if (b > g){
			 s.push_back(B);
			b--;
		} else {
			s.push_back(G);
			g--;
		}
	}
	out << s << endl;
	return 0;
}