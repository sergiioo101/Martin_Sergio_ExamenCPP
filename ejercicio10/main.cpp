#include "profesor.cpp"

int main() {
    // Crear una instancia de la clase Profesor con nombre "Ruben", edad 33, materia "Programacion" y 8 años de experiencia
    Profesor profesor("Ruben", 33, "Programacion", 8);
    // Llamar a la función miembro mostrar_info_profesor() para imprimir la información del profesor
    profesor.mostrar_info_profesor();

    return 0;
}
