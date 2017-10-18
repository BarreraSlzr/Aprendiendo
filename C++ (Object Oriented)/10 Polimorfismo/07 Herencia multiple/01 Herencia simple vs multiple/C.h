#ifndef C_H_INCLUDED
#define C_H_INCLUDED

#include <iostream>
#include "A.h"

using namespace std;

class C:public A{
public:
    void correr(){
        cout << "Corriendo..." << endl;
    }
    void conversar(){
        cout << "Conversando..." << endl;
    }
    void comer(){
        cout << "Comiendo..." << endl;
    }
};

#endif // C_H_INCLUDED
