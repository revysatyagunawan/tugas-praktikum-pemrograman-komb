#include <iostream>
using namespace std;

int main(){
    
    cout << "This program will calculate the sum of all natural numbers up to n" << endl;
    cout << "Enter n" << endl;

    int n;
    cin >> n;

    int sum;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "sum: " << sum << endl;

    return 0;

}