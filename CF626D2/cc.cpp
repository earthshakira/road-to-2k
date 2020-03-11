#include <iostream>
#include <cmath>
using namespace std;

void solve(){
	double a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << max(x1,x2) << " "<< min(x2,x1) << endl;
    }
    
    else if (discriminant == 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << x1 << " " << x1 << "\n";
    } else {
        cout << "No REAL roots found\n";
    }
}
int main() {
	int t;
	cin >> t;
	cout.precision(10);
	while(t--)
		solve();
    return 0;
}