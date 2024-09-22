#include <iostream>
#include <cmath>
using namespace std;

//berikut merupakan fungsi untuk menyelesaikan persamaan kuadrat
void akar_persamaan_kuadrat(double a, double b, double c) {

    cout << endl;   // untuk memberi jarak 
    cout << "Solusi persamaan kuadratnya: " << endl;

    double diskriminan = pow(b, 2) - 4*a*c;

    if(diskriminan > 0) {
        double x1 = (-b + pow(diskriminan, 0.5))/(2*a);
        double x2 = (-b - pow(diskriminan, 0.5))/(2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if(diskriminan == 0) {
        double x = -b/(2*a);
        cout << "x = " << x << endl;
    } else {
        cout << "Tidak ada solusi real (solusinya bilangan kompleks)" << endl;
    }
    
}

int main() {

    cout << "Akan dihitung solusi persamaan kuadrat ax^2 + bx + c" << endl;

    //berikut adalah semua input untuk dimasukkan ke fungsi akar_persamaan_kuadrat

    double a, b, c;
    cout << "Masukkan nilai a, b, dan c" << endl;
    cin >> a >> b >> c;

    akar_persamaan_kuadrat(a, b, c);

    return 0;

}