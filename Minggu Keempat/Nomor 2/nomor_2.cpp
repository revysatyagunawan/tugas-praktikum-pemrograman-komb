#include <iostream>
using namespace std;

int main() {

    cout << "The program will print the multiplication table for integer n" << endl;
    cout << "Enter n" << endl;

    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }

return 0;

}