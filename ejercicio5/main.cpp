#include "estudiante.cpp"

int main() {
    // Crear un objeto de la clase Estudiante
    Estudiante estudiante1("Juan", 20, "Cuarto");
    // Llamar a la función miembro mostrar_info() para imprimir la información del estudiante
    estudiante1.mostrar_info();
    // Llamar a la función miembro mostrar_materias() para imprimir las materias registradas del estudiante
    estudiante1.mostrar_materias();

    return 0;
}
