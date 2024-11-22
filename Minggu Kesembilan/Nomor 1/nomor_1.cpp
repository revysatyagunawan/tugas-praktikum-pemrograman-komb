#include <bits/stdc++.h>
using namespace std;

struct data_siswa {
    long long nisn;
    string nama;
    int nilai;
};

void insertion_sort_nisn(data_siswa siswa[], int n) {
    int i;
    long long temp;
    for (int j = 1; j < n; j++) {
        i = j - 1;
        temp = siswa[j].nisn;
        while (siswa[i].nisn > temp && i>= 0) {
            siswa[i + 1].nisn = siswa[i].nisn;
            i--;
        }
        siswa[i + 1].nisn = temp;
    }
}

void insertion_sort_nilai(data_siswa siswa[], int n) {
    int i, temp;
    for (int j = 1; j < n; j++) {
        i = j - 1;
        temp = siswa[j].nilai;
        while (siswa[i].nilai > temp && i>= 0) {
            siswa[i + 1].nilai = siswa[i].nilai;
            i--;
        }
        siswa[i + 1].nilai = temp;
    }
}

void selection_sort_nisn(data_siswa siswa[], int n) {
    int min;
    long long temp;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (siswa[j].nisn < siswa[min].nisn) min = j;
        }
        temp = siswa[i].nisn;
        siswa[i].nisn = siswa[min].nisn;
        siswa[min].nisn = temp;
    }
}

void selection_sort_nilai(data_siswa siswa[], int n) {
    int min, temp;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (siswa[j].nilai < siswa[min].nilai) min = j;
        }
        temp = siswa[i].nilai;
        siswa[i].nilai = siswa[min].nilai;
        siswa[min].nilai = temp;
    }
}

void bubble_sort_nisn(data_siswa siswa[], int n) {
    long long temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - (i + 1); j++) {
            if (siswa[j].nisn > siswa[j + 1].nisn) {
                temp = siswa[j].nisn;
                siswa[j].nisn = siswa[j + 1].nisn;
                siswa[j + 1].nisn = temp;
            }
        }
    }
}

void bubble_sort_nilai(data_siswa siswa[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - (i + 1); j++) {
            if (siswa[j].nilai > siswa[j + 1].nilai) {
                temp = siswa[j].nilai;
                siswa[j].nilai = siswa[j + 1].nilai;
                siswa[j + 1].nilai = temp;
            }
        }
    }
}

void binary_search_nilai(data_siswa siswa[], long long s, int n) {
    int i = 0;
    while (i <= n) {
        int k = i + (n - i) / 2;
        if (siswa[k].nisn == s) {
            cout << siswa[k].nilai << endl;
            return;
        }
        else if (siswa[k].nisn < s) i = k + 1;
        else n = k - 1;
    }
    cout << "tidak ditemukan" << endl;
}

void sequential_search_joko(data_siswa siswa[], int query, int n) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (siswa[i].nilai == query) {
            cout << "nama " << siswa[i].nama;
            siswa[i].nama = "Joko";
            cout << " diubah menjadi " << siswa[i].nama << endl;
            found = true;
        }
    }
    if (!found) cout << "tidak ditemukan" << endl;
}

int main() {

    data_siswa siswa[7];
    data_siswa siswa2[7];
    data_siswa siswa3[7];
    data_siswa siswa4[7];

    siswa[0].nisn = 9960312699;
    siswa[0].nama = "Handi Ramadhan";
    siswa[0].nilai = 90;

    siswa[1].nisn = 9963959682;
    siswa[1].nama = "Rio Alfandra";
    siswa[1].nilai = 55;

    siswa[2].nisn = 9950310962;
    siswa[2].nama = "Ronaldo Valentino Uneputty";
    siswa[2].nilai = 80;

    siswa[3].nisn = 9970272750;
    siswa[3].nama = "Achmad Yaumil Fadjri R.";
    siswa[3].nilai = 60;
    
    siswa[4].nisn = 9970293945;
    siswa[4].nama = "Alivia Rahma Pramesti";
    siswa[4].nilai = 70;
    
    siswa[5].nisn = 9952382180;
    siswa[5].nama = "Ari Lutfianto";
    siswa[5].nilai = 65;
    
    siswa[6].nisn = 9965653989;
    siswa[6].nama = "Arief Budiman";
    siswa[6].nilai = 60;

    for (int i = 0; i < 7; i++) {
        siswa2[i].nisn = siswa[i].nisn;
        siswa2[i].nama = siswa[i].nama;
        siswa2[i].nilai = siswa[i].nilai;

        siswa3[i].nisn = siswa[i].nisn;
        siswa3[i].nama = siswa[i].nama;
        siswa3[i].nilai = siswa[i].nilai;

        siswa4[i].nisn = siswa[i].nisn;
        siswa4[i].nama = siswa[i].nama;
        siswa4[i].nilai = siswa[i].nilai;
    }

    insertion_sort_nisn(siswa, 7);
    for (int i = 0; i < 7; i++) {
        cout << siswa[i].nisn << " ";
    }
    cout << endl;

    insertion_sort_nilai(siswa, 7);
    for (int i = 0; i < 7; i++) {
        cout << siswa[i].nilai << " ";
    }
    cout << endl;

    selection_sort_nisn(siswa2, 7);
    for (int i = 0; i < 7; i++) {
        cout << siswa[i].nisn << " ";
    }
    cout << endl; 

    selection_sort_nilai(siswa2, 7);
    for (int i = 0; i < 7; i++) {
        cout << siswa[i].nilai << " ";
    }
    cout << endl;

    bubble_sort_nisn(siswa3, 7);
    for (int i = 0; i < 7; i++) {
        cout << siswa[i].nisn << " ";
    }
    cout << endl;

    bubble_sort_nilai(siswa3, 7);
    for (int i = 0; i < 7; i++) {
        cout << siswa[i].nilai << " ";
    }
    cout << endl;

    binary_search_nilai(siswa, 9950310962, 6);
    sequential_search_joko(siswa4, 60, 7);
    
}