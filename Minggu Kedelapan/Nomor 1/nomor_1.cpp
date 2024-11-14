#include <iostream>
using namespace std;

int fibonacci(int index) {
    
    if (index == 0) return 0;
    else if (index == 1) return 1;
    else return fibonacci(index - 1) + fibonacci(index - 2);
    
}

int main() {
    
    //test case 1
    int n_1 = 2;
    int expected_output_1 = 1;
    if (expected_output_1 == fibonacci(n_1)) cout << "test 1 succeed" << endl;
    
    //test case 2
    int n_2 = 5;
    int expected_output_2 = 5;
    if (expected_output_2 == fibonacci(n_2)) cout << "test 2 succeed" << endl;
    
    //test case 3
    int n_3 = 9;
    int expected_output_3 = 34;
    if (expected_output_3 == fibonacci(n_3)) cout << "test 3 succeed" << endl;
    
    return 0;
    
}