#include "estudiante.h"
#include "estudiante.cpp"

int main() {
    // Crear una instancia de la clase Estudiante con nombre "Juan", edad 20 y grado "Cuarto"
    Estudiante estudiante1("Juan", 20, "Cuarto");
    // Llamar a la función miembro mostrar_info() para imprimir la información del estudiante
    estudiante1.mostrar_info();

    return 0;
}
