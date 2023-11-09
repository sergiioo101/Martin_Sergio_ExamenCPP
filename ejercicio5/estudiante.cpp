#include "estudiante.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante(string n, int e, string g) : nombre(n), edad(e), grado(g) {}

void Estudiante::mostrar_info() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Grado: " << grado << endl;
}

void Estudiante::registrar_materia(const string& materia) {
    materias.push_back(materia);
    cout << "Materia registrada: " << materia << endl;
}

void Estudiante::mostrar_materias() {

    registrar_materia("Matematicas");
    registrar_materia("Fisica");
    registrar_materia("Quimica");

}
