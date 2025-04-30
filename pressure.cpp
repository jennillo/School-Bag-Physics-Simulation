#include<iostream>
using namespace std;

double m, w, l, A, P, F;
const double g = 9.8;

int main() {
    cout << "\nINPUT\n";
    cout << "m (kg)        : ";
    cin >> m;
    cout << "width (cm)    : ";
    cin >> w;
    cout << "length (cm)   : ";
    cin >> l;

    w /= 100;
    l /= 100;

    A = w * l;
    F = m * g;

    cout << "\nPILIH JENIS TAS\n";
    cout << "(1) Satu tali\n(2) Dua tali\nKetik angka   : ";
    int num; cin >> num;
    switch(num) {
        case 1 : {A *= 1; break;}
        case 2 : {A *= 2; break;}
        default : {cout << "ERROR!\n"; return 1;}
    }

    P = F / A;
    cout << "\nP = " << P << " Pa\n\n";
    return 0;
}