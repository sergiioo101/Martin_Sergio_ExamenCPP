#ifndef EXAMEN1_FUNCIONES_H
#define EXAMEN1_FUNCIONES_H
#include <string>

class RegistroAsistencia {
private:
    std::string fecha;
    std::string estado;

public:
    RegistroAsistencia(std::string fecha, std::string estado);
    void mostrar_asistencia();
};

#endif
