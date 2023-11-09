#include <iostream>
#include "Estudiante.cpp"
#include "MateriaYaRegistradaException.cpp"

int main() {
    try {
        // Crear una instancia de la clase Estudiante con nombre "Juan", edad 20 y grado "Cuarto"
        Estudiante estudiante("Juan", 20, "Cuarto");
        // Registrar materias para el estudiante
        estudiante.registrarMateria("Matematicas");
        estudiante.registrarMateria("Historia");
        // Intentar registrar una materia que ya ha sido registrada (lanzará una excepción)
        estudiante.registrarMateria("Matematicas");
        // Mostrar las materias registradas del estudiante
        estudiante.mostrarMaterias();

    } catch (const MateriaYaRegistradaException& ex) {
        // Capturar y manejar la excepción en caso de intento de registro de materia duplicada
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}