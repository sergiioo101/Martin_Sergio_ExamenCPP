#include <iostream>
#include "funcion.cpp"

using namespace std;

int main() {

    int variable1 = 5;
    int variable2 = 10;

    cout << "Antes del intercambio:" << endl;
    cout << "Variable 1: " << variable1 << endl;
    cout << "Variable 2: " << variable2 << endl;

    intercambiarValores(&variable1, &variable2);

    cout << "\nDespues del intercambio:" << endl;
    cout << "Variable 1: " << variable1 << endl;
    cout << "Variable 2: " << variable2 << endl;

    return 0;
}
