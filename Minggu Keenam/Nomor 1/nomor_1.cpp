#include <iostream>
#include <string>
using namespace std;

struct data_barang {
    int kode;
    string nama;
    double harga;
    int banyak;
};

int banyak_barang(data_barang db[], int banyak_jenis) {
    int total_banyak = 0;
    for (int i = 0; i < banyak_jenis; i++) {
        total_banyak += db[i].banyak;
    }
    return total_banyak;
}

double rata_rata(data_barang db[], int banyak_jenis) {
    double total_harga = 0;
    for (int i = 0; i < banyak_jenis; i++) {
        total_harga += db[i].harga * db[i].banyak;
    }
    
    double rerata = total_harga/banyak_barang(db, banyak_jenis);
    return rerata;
}

int main() {
    int expected_banyak_barang;
    double expected_rata_rata;
    
    // test case 1

    data_barang barang1[2];
    barang1[0].banyak = 1;
    barang1[0].harga = 8000;
    barang1[1].banyak = 5;
    barang1[1].harga = 2000;
    expected_banyak_barang = 6;
    expected_rata_rata = 3000;
    if (expected_banyak_barang == banyak_barang(barang1, 2) && expected_rata_rata == rata_rata(barang1, 2)) {
        cout << "test case 1 passed" << endl << endl;
    }

    // test case 2

    data_barang barang2[3];
    barang2[0].banyak = 4;
    barang2[0].harga = 1000;
    barang2[1].banyak = 2;
    barang2[1].harga = 3000;
    barang2[2].banyak = 1;
    barang2[2].harga = 4000;
    expected_banyak_barang = 7;
    expected_rata_rata = 2000;
    if (expected_banyak_barang == banyak_barang(barang2, 3) && expected_rata_rata == rata_rata(barang2, 3)) {
        cout << "test case 2 passed" << endl << endl;
    }

    // test case 3

    data_barang barang3[4];
    barang3[0].banyak = 7;
    barang3[0].harga = 6000;
    barang3[1].banyak = 5;
    barang3[1].harga = 9000;
    barang3[2].banyak = 9;
    barang3[2].harga = 7000;
    barang3[3].banyak = 9;
    barang3[3].harga = 10000;
    expected_banyak_barang = 30;
    expected_rata_rata = 8000;
    if (expected_banyak_barang == banyak_barang(barang3, 4) && expected_rata_rata == rata_rata(barang3, 4)) {
        cout << "test case 3 passed" << endl << endl;
    }

    return 0;
}