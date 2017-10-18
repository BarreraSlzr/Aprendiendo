#include <iostream>
#include <string.h>
#include "AdminCirculos.h"
#include "Circulo.h"

using namespace std;

int main()
{
    AdminCirculos* adminCirculos=new AdminCirculos;

    if (adminCirculos->agregar(10,14,9)){
        cout << "Si se agrego c1" << endl;
    }
    else{
        cout << "No se pudo agregar c1" << endl;
    }
    if (adminCirculos->agregar(20,14,9)){
        cout << "Si se agrego c2" << endl;
    }
    else{
        cout << "No se pudo agregar c2" << endl;
    }
    if (adminCirculos->agregar(30,14,9)){
        cout << "Si se agrego c3" << endl;
    }
    else{
        cout << "No se pudo agregar c3" << endl;
    }
    cout << endl;
    cout << adminCirculos->dameInfoCirculo(0) << endl;
    cout << adminCirculos->dameInfoCirculo(1) << endl;
    cout << adminCirculos->dameInfoCirculo(2) << endl;

    delete adminCirculos;//que pasa si omito este delete?
    return 0;
}
