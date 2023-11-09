#include "funcion.h"

void intercambiarValores(int *ptrVar1, int *ptrVar2) {

    int temp = *ptrVar1;
    *ptrVar1 = *ptrVar2;
    *ptrVar2 = temp;
}

