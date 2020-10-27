#ifndef ARREGLODIMAMICO_H
#define ARREGLODINAMICO_H

#include <iostream>

class Arreglodinamico
{
private:
    std::string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

    void expandir();

public:
    Arreglodinamico();
    ~Arreglodinamico();

    void insertar_inicio(const std::string &s);
    void insertar_final(const std::string &s);
    size_t size();

    std::string operator[](size_t p){
        return arreglo[p];
    }
};



#endif