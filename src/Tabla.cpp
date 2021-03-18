#include <iostream>
#include "Tabla.h"

using namespace std;
const int nElementos = 10;

int main()
{
    std::cout << "Hello World!\n";
    /*
    Tabla<int> TablaInt(nElementos);
    Tabla<float> TablaFloat(nElementos);

    for (int i = 0; i < nElementos; i++)
        TablaInt[i] = nElementos - i;

    for (float i = 0; i < nElementos; i++)
        TablaFloat[i] = 1 / (1 + i);

    for (int i = 0; i < nElementos; i++) {
        cout << "TablaInt[" << i << "] = "
            << TablaInt[i] << endl;
        cout << "TablaFloat[" << i << "] = "
            << TablaFloat[i] << endl;
    }*/
    Tabla<char*> TablaCad(nElementos);
    char cadena[20];

    for (int i = 0; i < nElementos; i++) {
        sprintf(cadena, "Numero: %5d", i);
        TablaCad[i] = cadena;
    }

    strcpy(cadena, "Modificada");

    for (int i = 0; i < nElementos; i++)
        cout << "TablaCad[" << i << "] = "
        << TablaCad[i] << endl;
}

