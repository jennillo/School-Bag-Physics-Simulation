#include<iostream>
using namespace std;

double body_mass, ideal_mass;

int main() {
    cout << "\nINPUT\nBody mass (kg): ";
    cin >> body_mass;

    ideal_mass = 0.1 * body_mass;

    cout << "Ideal mass4 < " << ideal_mass << " kg\n\n";
    return 0;
}