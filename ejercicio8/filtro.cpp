#include "filtro.h"

std::vector<Estudiante> filtrarPorGrado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantesFiltrados;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.getGrado() == grado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }

    return estudiantesFiltrados;
}


