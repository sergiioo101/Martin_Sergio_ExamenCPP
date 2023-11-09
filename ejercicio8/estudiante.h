#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H
#include <string>

class Estudiante {
private:
    std::string nombre;
    int edad;
    std::string grado;

public:
    Estudiante(std::string n, int e, std::string g);
    std::string getGrado() const;
    std::string getNombre() const;
};

#endif //EXAMEN1_ESTUDIANTE_H
