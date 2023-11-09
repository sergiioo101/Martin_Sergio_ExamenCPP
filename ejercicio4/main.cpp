#include <iostream>
#include "funcion.cpp"

using namespace std;

int main() {
    try {

        int resultado = dividir(10, 2);
        cout << "Resultado de la division: " << resultado << endl;

        resultado = dividir(5, 0);
        cout << "Esta linea no se ejecutara debido a la excepcion." << endl;
    } catch (const exception &ex) {

        cerr << "Excepcion capturada: " << ex.what() << endl;
    }

    return 0;
}

