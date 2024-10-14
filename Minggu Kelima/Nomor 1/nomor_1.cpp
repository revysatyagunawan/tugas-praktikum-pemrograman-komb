#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	
	vector <string> isi;
	
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			if (i % 5 == 0) {
				isi.push_back("FizzBuzz");
			} else {
				isi.push_back("Fizz");
			}
		} else if (i % 5 == 0) {
			isi.push_back("Buzz");
		} else {
			string a = to_string(i);
			isi.push_back(a);
		}
	}
	
	for (string i : isi) {
		cout << i << endl;
	}
	
	return 0;
	
}