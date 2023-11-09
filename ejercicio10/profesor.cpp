#include "profesor.h"
#include <iostream>

Profesor::Profesor(std::string n, int e, std::string mat, int exp)
        : nombre(n), edad(e), materia(mat), anosExperiencia(exp) {}

void Profesor::mostrar_info_profesor() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << " años" << std::endl;
    std::cout << "Materia que imparte: " << materia << std::endl;
    std::cout << "Años de experiencia: " << anosExperiencia << std::endl;
}

