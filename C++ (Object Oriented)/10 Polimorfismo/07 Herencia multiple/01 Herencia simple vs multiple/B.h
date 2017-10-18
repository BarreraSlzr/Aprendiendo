#ifndef B_H_INCLUDED
#define B_H_INCLUDED

#include <iostream>
#include "A.h"

using namespace std;

class B:public A{
public:
    void bailar(){
        cout << "Bailando..." << endl;
    }
    void brincar(){
        cout << "Brincando..." << endl;
    }
    void beber(){
        cout << "Bebiendo..." << endl;
    }
};

#endif // B_H_INCLUDED
