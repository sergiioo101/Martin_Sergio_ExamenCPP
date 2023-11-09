#include "calculos.h"
#include <iostream>

double calcularPromedio(const std::vector<int>& calificaciones) {
    if (calificaciones.empty()) {
        std::cerr << "Error: La lista de calificaciones está vacía." << std::endl;
        return 0.0;
    }

    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    double promedio = static_cast<double>(suma) / calificaciones.size();

    return promedio;
}

