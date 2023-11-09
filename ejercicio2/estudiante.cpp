#include "estudiante.h"
#include <iostream>
#include <utility>
using namespace std;

Estudiante::Estudiante(string n, int e, string g) : nombre(std::move(n)), edad(e), grado(std::move(g)) {}

void Estudiante::mostrar_info() {
    cout << "Nombre: " << nombre << std::endl;
    cout << "Edad: " << edad << " años" << std::endl;
    cout << "Grado: " << grado << std::endl;
}
