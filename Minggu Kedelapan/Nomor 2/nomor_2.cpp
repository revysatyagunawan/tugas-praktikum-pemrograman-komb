#include <iostream>
using namespace std;

double rata_rata(int arr[], int i, int n) {
    
    if (i == n - 1) return arr[i];
    if (i == 0) return ((arr[i] + rata_rata(arr, i + 1, n)) / n);
    return (arr[i] + rata_rata(arr, i + 1, n));
    
}

int main() {
    
    // test case 1
    int data_1[] = {1, 3, 42, 4, 10};
    double expected_output_1 = 12;
    if (expected_output_1 == rata_rata(data_1, 0, 5)) cout << "test 1 passed" << endl;

    // test case 2
    int data_2[] = {2, 9, 81, 6};
    double expected_output_2 = 24.5;
    if (expected_output_2 == rata_rata(data_2, 0, 4)) cout << "test 2 passed" << endl;

    //test case 3
    int data_3[] = {3, 8, 11, 4, 7, 9};
    double expected_output_3 = 7;
    if (expected_output_3 == rata_rata(data_3, 0, 6)) cout << "test 3 passed" << endl;
    

    return 0;
}