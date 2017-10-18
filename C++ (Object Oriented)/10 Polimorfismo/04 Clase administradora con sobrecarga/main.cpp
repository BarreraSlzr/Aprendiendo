#include <iostream>
#include <string.h>
#include "AdminCirculos.h"
#include "Circulo.h"

using namespace std;

int main()
{
    AdminCirculos adminCirculos;
    Circulo c4(40,12,4);
    Circulo* c5=new Circulo(50,13,5);

    if (adminCirculos.agregar(10,14,9)){
        cout << "Si se agrego c1" << endl;
    }
    else{
        cout << "No se pudo agregar c1" << endl;
    }
    if (adminCirculos.agregar(20,14,9)){
        cout << "Si se agrego c2" << endl;
    }
    else{
        cout << "No se pudo agregar c2" << endl;
    }
    if (adminCirculos.agregar(30,14,9)){
        cout << "Si se agrego c3" << endl;
    }
    else{
        cout << "No se pudo agregar c3" << endl;
    }

    cout << endl;
    cout << adminCirculos.dameInfoCirculo(0) << endl;
    cout << adminCirculos.dameInfoCirculo(1) << endl;
    cout << adminCirculos.dameInfoCirculo(2) << endl << endl;

    if (adminCirculos.agregar(&c4)){//cuestionable pasar &c4 por el destructor de AdminCirculos
        cout << "Si se agrego c4" << endl;
    }
    else{
        cout << "No se pudo agregar c4" << endl;
    }

    if (adminCirculos.agregar(c5)){//esta si por haber sido creada con new
        cout << "Si se agrego c5" << endl;
    }
    else{
        cout << "No se pudo agregar c5" << endl;
    }
    delete c5;
    return 0;
}
