#include "Estudiante.h"
#include <iostream>

Estudiante::Estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {}

void Estudiante::registrarMateria(const std::string& materia) {
    for (const std::string& materiaRegistrada : materias) {
        if (materiaRegistrada == materia) {
            throw MateriaYaRegistradaException(materia);
        }
    }

    materias.push_back(materia);
    std::cout << "Materia registrada: " << materia << std::endl;
}

void Estudiante::mostrarMaterias() const {
    if (materias.empty()) {
        std::cout << "No hay materias registradas." << std::endl;
    } else {
        std::cout << "Materias registradas:" << std::endl;
        for (const std::string& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }
}
