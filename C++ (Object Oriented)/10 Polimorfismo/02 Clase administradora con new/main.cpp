#include <iostream>
#include <string.h>
#include "AdminCirculos.h"
#include "Circulo.h"

using namespace std;

int main()
{
    AdminCirculos* adminCirculos=new AdminCirculos;
    Circulo c4(40,12,4);
    Circulo* c5=new Circulo(50,13,5);

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
    if (adminCirculos->agregar(30,14,9)){//que pasa si comentas este if-else?
        cout << "Si se agrego c3" << endl;
    }
    else{
        cout << "No se pudo agregar c3" << endl;
    }

    cout << endl;
    cout << adminCirculos->dameInfoCirculo(0) << endl;
    cout << adminCirculos->dameInfoCirculo(1) << endl;
    cout << adminCirculos->dameInfoCirculo(2) << endl << endl;

    if (adminCirculos->agregar(&c4)){//cuestionable pasar &c4 por el destructor de AdminCirculos
        cout << "Si se agrego c4" << endl;
    }
    else{
        cout << "No se pudo agregar c4" << endl;
    }//comentar este if a ver que pasa

    if (adminCirculos->agregar(c5)){//esta si por haber sido creada con new
        cout << "Si se agrego c5" << endl;
    }
    else{
        cout << "No se pudo agregar c5" << endl;
    }
    delete c5;
    delete adminCirculos;/*
        si comentaste el agregar de c4, el admiinCirculos referencia a c5,
         pero le diste delete a c5*/
    cout << "c4 vive? " << c4.dameInfo() << endl;//c4 esta vivo? o es basura?
    cout << "Presiona entrar para averiguar mas..." << endl;
    cin.get();
    //cout << "c5 vive? " << c5->dameInfo() << endl;//c5 esta vivo? o es basura?
    return 0;
}
