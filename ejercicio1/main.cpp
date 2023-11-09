#include <iostream>
#include "funciones.cpp"

using namespace std;

int main() {
    // Ejemplo 1
    int num1, num2;
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    // Llamada a la funcion
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;
    // Llamada a la funcion
    int resultadoSuma = sumaEnteros(num1, num2);
     // Imprimir el resultado
    cout << "La suma de " << num1 << " y " << num2 << " es: " << resultadoSuma << endl;

    return 0;
}
