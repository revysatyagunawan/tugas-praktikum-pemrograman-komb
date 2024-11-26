#include <iostream>
using namespace std;

int main() {
    cout << endl;

    //test case 1
    cout << "test case 1" << endl << endl;
    int test1[] = {1, 9, 3, 6, 8, 7, 2, 5};
    int maks1 = test1[0];
    for (int i : test1) {
        if (i > maks1) maks1 = i;
    }
    cout << "daftar bilangan: ";
    for (int i : test1) {
        cout << i << " ";
    }
    cout << endl << "nilai terbesar dalam daftar bilangan adalah: " << maks1 << endl << endl;

    //test case 2
    cout << "test case 2" << endl << endl;
    int test2[] = {10, 42, 43, 25, 75, 35, 86, 47, 18, 73};
    int maks2 = test2[0];
    for (int i : test2) {
        if (i > maks2) maks2 = i;
    }
    cout << "daftar bilangan: ";
    for (int i : test2) {
        cout << i << " ";
    }
    cout << endl << "nilai terbesar dalam daftar bilangan adalah: " << maks2 << endl << endl;

    //test case 2
    cout << "test case 3" << endl << endl;
    int test3[] = {111, 242, 534, 536, 356, 966, 257, 453, 645, 354, 876, 998, 323};
    int maks3 = test3[0];
    for (int i : test3) {
        if (i > maks3) maks3 = i;
    }
    cout << "daftar bilangan: ";
    for (int i : test3) {
        cout << i << " ";
    }
    cout << endl << "nilai terbesar dalam daftar bilangan adalah: " << maks3 << endl << endl;

    return 0;
}