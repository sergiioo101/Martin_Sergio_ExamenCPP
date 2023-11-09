#ifndef EXAMEN1_PROFESOR_H
#define EXAMEN1_PROFESOR_H
#include <string>

class Profesor {
private:
    std::string nombre;
    int edad;
    std::string materia;
    int anosExperiencia;

public:
    Profesor(std::string n, int e, std::string mat, int exp);
    void mostrar_info_profesor() const;
};

#endif
