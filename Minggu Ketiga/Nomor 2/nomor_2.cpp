#include <iostream>
using namespace std;

int main() {
	
	cout << "akan ditentukan bilangan yang terbesar dari 3 bilangan berbeda a, b, dan c" << endl;
	cout << "masukkan nilai a, b, dan c" << endl;
	
	double a, b, c;
	cin >> a >> b >> c;
	
	double terbesar;
	if (a > b) {
		if (c > a) {
			terbesar = c;
		} else {
			terbesar = a;
		} 	
	} else if (b > a){
		if (c > b) {
			terbesar = c;
		} else {
			terbesar = b;
		}
	} else {
		if (a > c) {
			terbesar = a;
		} else {
			terbesar = c;
		}
	}
	
	cout << "bilangan yang terbesar adalah " << terbesar << endl;
	
	return 0;
	
}
