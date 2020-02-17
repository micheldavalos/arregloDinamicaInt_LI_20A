#include "arreglodinamicoint.h"

ArregloDinamicoInt::ArregloDinamicoInt()
{
    arreglo = new int[MAX];
    cont = 0;
    tam = MAX;
}

ArregloDinamicoInt::ArregloDinamicoInt(size_t t, int e)
{
    arreglo = new int[t];
    for (size_t i = 0; i < t; ++i) {
        arreglo[i] = e;
    }
    tam = t;
    cont = t;
}

void ArregloDinamicoInt::insertar_final(int e)
{
    if (cont == tam) {
        int *nuevo = new int[tam+MAX];

        for (size_t i = 0; i < cont; ++i) {
            nuevo[i] = arreglo[i];
        }
        delete []arreglo;
        arreglo = nuevo;
        tam = tam + MAX;
    }
    arreglo[cont] = e;
    cont++;
}

void ArregloDinamicoInt::insertar_inicio(int e)
{
    if (cont == tam) {
        int *nuevo = new int[tam+MAX];

        for (size_t i = 0; i < cont; ++i) {
            nuevo[i] = arreglo[i];
        }
        delete []arreglo;
        arreglo = nuevo;
        tam = tam + MAX;
    }
    for (size_t i = cont; i > 0; i--) {
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = e;
    cont++;
}

size_t ArregloDinamicoInt::size()
{
    return cont;
}
