#include "funciones.h"
#include <iostream>

RegistroAsistencia::RegistroAsistencia(std::string fecha, std::string estado) : fecha(fecha), estado(estado) {}

void RegistroAsistencia::mostrar_asistencia() {
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Estado: " << estado << std::endl;
}

