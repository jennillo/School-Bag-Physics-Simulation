#include<cmath>
#include<iostream>
using namespace std;

double r1, r2, m, F, torque;
const double g = 9.8;

void lateral() {
    cout << "\nINPUT\n";
    cout << "r1 (cm)      : ";
    cin >> r1;
    cout << "r2 (cm)      : ";
    cin >> r2;
    cout << "m (kg)       : ";
    cin >> m;

    r1 /= 100;
    r2 /= 100;
    F = m * g;
    torque = F * (r1 - r2);
    cout << "\ntorque = " << torque << " Nm\n\n";
}

void frontal() {
    cout << "\nINPUT\n";
    cout << "r (cm)      : ";
    cin >> r1;
    cout << "m (kg)      : ";
    cin >> m;

    r1 /= 100;
    F = m * g;
    torque = F * r1;
    cout << "\ntorque = " << torque << " Nm\n\n";
}

int main() {
    cout << "\nPILIH JENIS TORSI\n";
    cout << "(1) Torsi lateral\n(2) Torsi frontal\nKetik angka : ";
    int num; cin >> num;
    switch(num) {
        case 1 : {lateral(); break;}
        case 2 : {frontal(); break;}
        default : {cout << "ERROR!\n\n"; return 1;}
    }
    return 0;
}