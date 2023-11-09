#include <iostream>
#include <vector>
#include "calculos.cpp"

int main() {
    // Crear un vector de calificaciones
    std::vector<int> calificaciones = {90, 85, 92, 88, 95};
    // Calcular el promedio de las calificaciones
    double promedio = calcularPromedio(calificaciones);
    // Mostrar el promedio de las calificaciones
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}
