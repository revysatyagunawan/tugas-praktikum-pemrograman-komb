#include <iostream>
using namespace std;

int main() {
    cout << endl;

    //test case 1
    cout << "test case 1" << endl << endl;
    int test1[] = {1, 4, 7, 3, 8, 5, 9, 2};
    int jumlahganjil1 = 0, jumlahgenap1 = 0;
    for (int i : test1) {
        if (i % 2 == 0) jumlahgenap1 += i;
        else jumlahganjil1 += i;
    }
    cout << "seluruh bilangan pada daftar: " << endl;
    for (int i : test1) {
        cout << i << " ";
    }
    cout << endl << "jumlah bilangan genap: " << jumlahgenap1;
    cout << endl << "jumlah bilangan ganjil: " << jumlahganjil1 << endl << endl;

    //test case 2
    cout << "test case 2" << endl << endl;
    int test2[] = {10, 23, 32, 53, 37, 43, 25, 98, 45, 34, 56, 20, 88};
    int jumlahganjil2 = 0, jumlahgenap2 = 0;
    for (int i : test2) {
        if (i % 2 == 0) jumlahgenap2 += i;
        else jumlahganjil2 += i;
    }
    cout << "seluruh bilangan pada daftar: " << endl;
    for (int i : test2) {
        cout << i << " ";
    }
    cout << endl << "jumlah bilangan genap: " << jumlahgenap2;
    cout << endl << "jumlah bilangan ganjil: " << jumlahganjil2 << endl << endl;

     //test case 3
    cout << "test case 3" << endl << endl;
    int test3[] = {101, 324, 645, 235, 754, 856, 344, 645, 746, 244, 648, 899, 296, 345};
    int jumlahganjil3 = 0, jumlahgenap3 = 0;
    for (int i : test3) {
        if (i % 2 == 0) jumlahgenap3 += i;
        else jumlahganjil3 += i;
    }
    cout << "seluruh bilangan pada daftar: " << endl;
    for (int i : test3) {
        cout << i << " ";
    }
    cout << endl << "jumlah bilangan genap: " << jumlahgenap3;
    cout << endl << "jumlah bilangan ganjil: " << jumlahganjil3 << endl << endl;

    return 0;
}