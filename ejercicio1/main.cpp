#include <iostream>
#include "funciones.cpp"

int main() {
    int num1, num2;
    std::cout << "Ingrese el primer numero entero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero entero: ";
    std::cin >> num2;

    int resultadoSuma = sumaEnteros(num1, num2);

    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << resultadoSuma << std::endl;

    return 0;
}
