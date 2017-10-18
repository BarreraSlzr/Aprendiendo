#ifndef E_H_INCLUDED
#define E_H_INCLUDED

#include <iostream>
#include "C.h"

using namespace std;

class E:public C{//que pasa si comentas esta y descomentas la siguiente?
//class E:public C,public B{
public:
    void esperar(){
        cout << "Esperando..." << endl;
    }
    void escuchar(){
        cout << "Escuchando..." << endl;
    }
    void escribir(){
        cout << "Escribiendo..." << endl;
    }
};

#endif // E_H_INCLUDED
