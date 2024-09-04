#include <iostream>
#include <string>
using namespace std;

//berikut adalah fungsi untuk membuat laporan penghasilan
void net_salary(string name, int gross_salary, int installment, int insurance) {

    int tax = gross_salary/5;   //besar tax adalah 20%
    int net_salary = gross_salary - tax - installment - insurance;  // net salary adalah penghasilan (penghasilan kotor dikurangi semua biaya lainnya)

    cout << endl; // untuk memberi jarak

    //berikut merupakan laporan penghasilannya

    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << gross_salary << endl;
    cout << "Tax (20%): Rp" << tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << "Net Salary: Rp" << net_salary << endl;
}

int main() {

    cout << "Akan diberikan lapoan penghasilan" << endl;

    //berikut merupakan semua input untuk dimasukkan ke dalam fungsi net_salary

    string Name;
    cout << "Enter the employee name" << endl;
    getline(cin, Name);

    int Gross_salary;
    cout << "Enter the amount of gross salary" << endl;
    cin >> Gross_salary;

    int Installment;
    cout << "Enter the amount of installment" << endl;
    cin >> Installment;

    int Insurance;
    cout << "Enter the amount of insurance" << endl;
    cin >> Insurance;

    net_salary(Name, Gross_salary, Installment, Insurance);

    return 0;
}