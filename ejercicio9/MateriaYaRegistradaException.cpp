#include "MateriaYaRegistradaException.h"

MateriaYaRegistradaException::MateriaYaRegistradaException(const std::string& materia)
        : mensaje("La materia '" + materia + "' ya está registrada.") {}

const char* MateriaYaRegistradaException::what() const noexcept {
    return mensaje.c_str();
}
