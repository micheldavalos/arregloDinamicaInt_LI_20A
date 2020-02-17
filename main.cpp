#include <iostream>
#include "arreglodinamicoint.h"

using namespace std;

int main()
{
    ArregloDinamicoInt a(20, 1);

    for (int i = 0; i < 10; i++) {
//        a.insertar_final(i);
        a + i;
    }

    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << endl;

    a << -1; // a.insertar_inicio(-1);
    a << -2; // a.insertar_inicio(-2);

    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << endl;


//    int a = 12;
//    int *b = new int[10];
////    b = &a;
////    *b = 10;

//    cout << a << " " << &a << endl;
//    cout << b << " " << *b << endl;

//    delete []b;
    return 0;
}
