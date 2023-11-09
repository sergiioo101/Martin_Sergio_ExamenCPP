#include "estudiante.h"

Estudiante::Estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {}

std::string Estudiante::getGrado() const {
    return grado;
}

std::string Estudiante::getNombre() const {
    return nombre;
}

