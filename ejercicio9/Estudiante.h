#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H
#include <string>
#include <vector>
#include "MateriaYaRegistradaException.h"

class Estudiante {
private:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

public:
    Estudiante(std::string n, int e, std::string g);
    void registrarMateria(const std::string& materia);
    void mostrarMaterias() const;
};


#endif
