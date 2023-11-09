#include <iostream>
#include <vector>
#include "estudiante.cpp"
#include "filtro.cpp"

int main() {
    // Crear un vector de estudiantes
    std::vector<Estudiante> estudiantes = {
            Estudiante("Juan", 18, "Cuarto"),
            Estudiante("Maria", 17, "Tercero"),
            Estudiante("Carlos", 19, "Cuarto"),
            Estudiante("Laura", 16, "Segundo")
    };

    // Filtrar estudiantes por grado
    std::string gradoBuscado = "Cuarto";
    std::vector<Estudiante> estudiantesFiltrados = filtrarPorGrado(estudiantes, gradoBuscado);

    // Mostrar estudiantes filtrados
    std::cout << "Estudiantes de " << gradoBuscado << ":" << std::endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        std::cout << estudiante.getNombre() << std::endl;
    }

    return 0;
}

