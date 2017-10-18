#ifndef D_H_INCLUDED
#define D_H_INCLUDED

#include <iostream>
#include "B.h"

using namespace std;

class D:public B{
public:
    void danzar(){
        cout << "Danzando..." << endl;
    }
    void dibujar(){
        cout << "Dibujando..." << endl;
    }
    void dormir(){
        cout << "Durmiendo..." << endl;
    }
};

#endif // D_H_INCLUDED
