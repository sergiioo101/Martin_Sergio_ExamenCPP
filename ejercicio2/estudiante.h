#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    string grado;

public:
    Estudiante(string n, int e, string g);
    void mostrar_info();
};

#endif
