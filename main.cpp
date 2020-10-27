#include <iostream>
#include "arreglodinamico.h"

using namespace std;

int main(){
    Arreglodinamico arreglo;
    arreglo.insertar_final("Hola");
    arreglo.insertar_final("que");
    arreglo.insertar_final("tal");
    arreglo.insertar_final("como");
    arreglo.insertar_final("esta");
    arreglo.insertar_final("usted");
    arreglo.insertar_final("hoy");
    arreglo.insertar_final("?");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    cout << endl << endl;

    arreglo.insertar_inicio("dias,");
    arreglo.insertar_inicio("Buenos");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    return 0;
    
}