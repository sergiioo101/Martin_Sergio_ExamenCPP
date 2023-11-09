#include <iostream>
#include "funcion.cpp"

using namespace std;

int main() {
    // Definir dos variables enteras
    int variable1 = 5;
    int variable2 = 10;
    // Mostrar los valores iniciales de las variables
    cout << "Antes del intercambio:" << endl;
    cout << "Variable 1: " << variable1 << endl;
    cout << "Variable 2: " << variable2 << endl;
    // Llamar a la función de intercambio pasando las direcciones de las variables
    intercambiarValores(&variable1, &variable2);
    // Mostrar los valores después del intercambio
    cout << "\nDespues del intercambio:" << endl;
    cout << "Variable 1: " << variable1 << endl;
    cout << "Variable 2: " << variable2 << endl;

    return 0;
}
