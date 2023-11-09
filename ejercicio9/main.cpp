#include <iostream>
#include "Estudiante.cpp"
#include "MateriaYaRegistradaException.cpp"

int main() {
    try {

        Estudiante estudiante("Juan", 20, "Cuarto");

        estudiante.registrarMateria("Matematicas");
        estudiante.registrarMateria("Historia");
        estudiante.registrarMateria("Matematicas");

        estudiante.mostrarMaterias();
    } catch (const MateriaYaRegistradaException& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}