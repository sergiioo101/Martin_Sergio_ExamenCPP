#include "funcion.h"
#include <stdexcept>

int dividir(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::invalid_argument("Error: Division por cero");
    }
    return numerador / denominador;
}
