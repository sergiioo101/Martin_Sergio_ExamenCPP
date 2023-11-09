#include <iostream>
#include <vector>
#include "calculos.cpp"

int main() {

    std::vector<int> calificaciones = {90, 85, 92, 88, 95};

    double promedio = calcularPromedio(calificaciones);

    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}
