#include<iostream>
using namespace std;

double m, v1, v2, t, p1, p2, I, F;

int main() {
    cout << "\nINPUT\nm (kg)       : ";
    cin >> m;
    cout << "v1 (m/s)     : ";
    cin >> v1;
    cout << "v2 (m/s)     : ";
    cin >> v2;
    cout << "t (s)        : ";
    cin >> t;

    p1 = m * v1;
    p2 = m * v2;
    I = p2 - p1;
    F = I / t;

    cout << "\np1 = " << p1 << " kg m/s";
    cout << "\np2 = " << p2 << " kg m/s";
    cout << "\nI  = " << I << " Ns";
    cout << "\nF  = " << F << " N\n\n";
    return 0;
}