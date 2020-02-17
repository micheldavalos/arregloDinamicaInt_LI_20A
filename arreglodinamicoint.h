#ifndef ARREGLODINAMICOINT_H
#define ARREGLODINAMICOINT_H

#include <iomanip>
using namespace std;

class ArregloDinamicoInt
{
    int *arreglo;
    size_t cont;
    size_t tam;
    const static size_t MAX = 1000;

public:
    ArregloDinamicoInt();
    ArregloDinamicoInt(size_t t, int e);
    ~ArregloDinamicoInt()
    {
        delete [] arreglo;
    }

    void insertar_final(int e);
    void insertar_inicio(int e);
    size_t size();

    int operator[](size_t p)
    {
        return arreglo[p];
    }
    void operator+(int e)
    {
        insertar_final(e);
    }
    void operator<<(int e)
    {
        insertar_inicio(e);
    }
};

#endif // ARREGLODINAMICOINT_H
