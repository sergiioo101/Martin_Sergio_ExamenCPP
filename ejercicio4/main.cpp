#include <iostream>
#include "funcion.cpp"

using namespace std;

int main() {
    try {
        // Intentar realizar una división con éxito
        int resultado = dividir(10, 2);
        cout << "Resultado de la division: " << resultado << endl;
        // Intentar realizar una división que provocará una excepción
        resultado = dividir(5, 0);
        cout << "Esta linea no se ejecutara debido a la excepcion." << endl;
    } catch (const exception &ex) {
        // Capturar y manejar la excepción en caso de error
        cerr << "Excepcion capturada: " << ex.what() << endl;
    }

    return 0;
}

