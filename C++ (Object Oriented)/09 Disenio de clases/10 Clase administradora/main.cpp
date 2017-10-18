#include <iostream>
#include <string.h>
#include "AdminCirculos.h"
#include "Circulo.h"//podria prescindir de esta linea pero asi es mas apropiado

using namespace std;

int main()
{
    AdminCirculos adminCirculos;
    Circulo c1(10,14,9);
    Circulo c2(20,14,9);
    Circulo c3(30,14,9);

    cout << "Propiedades del circulo c1:" << endl;
    c1.imprimeInfo();

    cout << endl << "Propiedades del circulo c2:" << endl;
    c2.imprimeInfo();

    cout << endl << "Propiedades del circulo c3:" << endl;
    c3.imprimeInfo();

    cout << endl << endl;
    if (adminCirculos.agregar(&c1)){//que pasa si comento esto?
        cout << "Si se agrego c1" << endl;
    }
    else{
        cout << "No se pudo agregar c1" << endl;
    }
    if (adminCirculos.agregar(&c2)){
        cout << "Si se agrego c2" << endl;
    }
    else{
        cout << "No se pudo agregar c2" << endl;
    }
    if (adminCirculos.agregar(&c3)){
        cout << "Si se agrego c3" << endl;
    }
    else{
        cout << "No se pudo agregar c3" << endl;
    }

    adminCirculos.imprimeCirculo(1);
    adminCirculos.imprimeCirculo(2);
    adminCirculos.imprimeCirculo(3);

    return 0;
}
