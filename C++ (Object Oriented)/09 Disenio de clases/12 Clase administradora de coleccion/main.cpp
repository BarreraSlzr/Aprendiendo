#include <iostream>
#include <string.h>
#include "AdminCirculos.h"
#include "Circulo.h"//podria prescindir de esta linea pero asi es mas apropiado

using namespace std;

int main()
{
    AdminCirculos adminCirculos;
    Circulo* c1=new Circulo(10,14,9);
    Circulo* c2=new Circulo(20,14,9);
    Circulo* c3=new Circulo(30,14,9);

    cout << "Propiedades del circulo c1:" << endl;
    cout << c1->dameInfo() << endl;

    cout << "Propiedades del circulo c2:" << endl;
    cout << c2->dameInfo() << endl;

    cout << "Propiedades del circulo c3:" << endl;
    cout << c3->dameInfo() << endl;

    cout << endl;
    if (adminCirculos.agregar(c1)){
        cout << "Si se agrego c1" << endl;
    }
    else{
        cout << "No se pudo agregar c1" << endl;
    }
    if (adminCirculos.agregar(c2)){
        cout << "Si se agrego c2" << endl;
    }
    else{
        cout << "No se pudo agregar c2" << endl;
    }
    if (adminCirculos.agregar(c3)){
        cout << "Si se agrego c3" << endl;
    }
    else{
        cout << "No se pudo agregar c3" << endl;
    }
    cout << endl;

    cout << adminCirculos.dameInfoCirculo(1) << endl;
    cout << adminCirculos.dameInfoCirculo(2) << endl;
    cout << adminCirculos.dameInfoCirculo(3) << endl;

    delete c1;
    delete c2;
    delete c3;
    return 0;
}
