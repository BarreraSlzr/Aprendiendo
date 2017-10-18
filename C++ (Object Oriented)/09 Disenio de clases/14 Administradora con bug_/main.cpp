#include <iostream>
#include <string.h>
#include "AdminCirculos.h"
#include "Circulo.h"

using namespace std;

int main()
{
    AdminCirculos adminCirculos;

    if (adminCirculos.agregar(10,14,9)){
        cout << "Si se agrego c1" << endl;
    }
    else{
        cout << "No se pudo agregar c1" << endl;
    }
    cout << endl;
    cout << adminCirculos.dameInfoCirculo(0) << endl;
    cout << adminCirculos.dameInfoCirculo(1) << endl;
    cout << adminCirculos.dameInfoCirculo(2) << endl;
    //donde esta el bug?
    return 0;
}
