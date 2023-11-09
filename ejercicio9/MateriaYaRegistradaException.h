#ifndef EXAMEN1_MATERIAYAREGISTRADAEXCEPTION_H
#define EXAMEN1_MATERIAYAREGISTRADAEXCEPTION_H
#include <stdexcept>
#include <string>

class MateriaYaRegistradaException : public std::exception {
private:
    std::string mensaje;

public:
    MateriaYaRegistradaException(const std::string& materia);
    const char* what() const noexcept override;
};


#endif
