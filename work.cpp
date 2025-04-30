#include<cmath>
#include<iostream>
using namespace std;

double m, d, h, Fy, Wx, Wy, W, theta;
const double g = 9.8, Fx = 0;

void datar() {
    cout << "\nINPUT\n";
    cout << "m (kg)      : ";
    cin >> m;
    cout << "d (m)       : ";
    cin >> d;

    h = 0;

    Wx = Fx * d;
    Wy = m * g * h;

    W = sqrt(Wx * Wx + Wy * Wy);
    cout << "\nW = " << W << " J\n\n";
}

void miring() {
    Wx = Fx * d;

    cout << "\nPILIH JENIS INPUT\n";
    cout << "(1) Tinggi\n(2) Panjang lintasan\nKetik angka : ";
    int num; cin >> num;

    switch(num) {
        case 1 : {
            cout << "\nINPUT\n";
            cout << "m (kg)          : ";
            cin >> m;
            cout << "h (m)           : ";
            cin >> h; 
            break;
        }
        case 2 : {
            cout << "\nINPUT\n";
            cout << "m (kg)          : ";
            cin >> m;
            cout << "d (m)           : ";
            cin >> d;
            cout << "sudut (derajat) : ";
            cin >> theta;
            if (theta >= 180 || theta < 0) {cout << "ERROR!\n\n"; return;}

            theta = theta * M_PI / 180.0;
            h = d * sin(theta);
            break;
        }
        default : {cout << "ERROR!\n\n"; return;}
    }

    Wy = m * g * h;

    W = sqrt(Wx * Wx + Wy * Wy);
    cout << "\nW = " << W << " J\n\n";
}

int main() {
    cout << "\nPILIH JENIS MEDAN\n";
    cout << "(1) Medan datar\n(2) Medan miring\nKetik angka : ";
    int num; cin >> num;
    switch(num) {
        case 1 : {datar(); break;}
        case 2 : {miring(); break;}
        default : {cout << "ERROR!\n\n"; return 1;}
    }
    return 0;
}