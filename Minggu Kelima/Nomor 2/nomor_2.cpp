#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> balik(vector<string> v) {
    vector<string> hasil;
    for (int i = v.size() - 1; i >= 0; i--) {
        hasil.push_back(v[i]);
    }
    return hasil;
}

int main() {
    vector<string> isi;
    string n;
    cout << "[ ";
    while (cin >> n && n != "]") {
        isi.push_back(n);
    }

    isi = balik(isi);
    
    cout << "[ ";
    for (string x: isi) {
        cout << x << " ";
    }
    cout << "]" << endl;

    return 0;
}