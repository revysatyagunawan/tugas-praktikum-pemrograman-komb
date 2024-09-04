#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// berikut adalah fungsi dari program soal pertama
void net_salary(string name, int gross_salary, int installment, int insurance) {

    int tax = gross_salary/5;
    int net_salary = gross_salary - tax - installment - insurance;
    cout << endl;
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << gross_salary << endl;
    cout << "Tax (20%): Rp" << tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << "Net Salary: Rp" << net_salary << endl;

}

//berikut adalah fungsi dari program soal kedua
void akar_persamaan_kuadrat(double a, double b, double c) {

    cout << endl;
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

    net_salary("si a", 1000000, 175000, 125000);
    net_salary("si b", 50000000, 750000, 300000);
    net_salary("si c", 100000000, 1000000, 500000);

    akar_persamaan_kuadrat(2, 9, 10);
    akar_persamaan_kuadrat(25, 30, 9);
    akar_persamaan_kuadrat(2, 7, 25);
}