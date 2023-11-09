#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H

using namespace std;

#include <string>
#include <vector>

class Estudiante {
private:
    string nombre;
    int edad;
    string grado;
    vector<string> materias;

public:
    Estudiante(string n, int e, string g);
    void mostrar_info();
    void registrar_materia(const string& materia);
    void mostrar_materias();
};

#endif
