#include <iostream>
#include <string.h>
#include "AdminCirculos.h"
#include "Circulo.h"

using namespace std;

int main()
{
    AdminCirculos* adminCirculos=new AdminCirculos;
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

    if (adminCirculos->agregar(c5)){//esta si por haber sido creada con new
        cout << "Si se agrego c5" << endl;
    }
    else{
        cout << "No se pudo agregar c5" << endl;
    }
    //delete c5;//que pasa si descomentas esta?
    delete adminCirculos;//que imprime al destruir adminCirculos
    cout << "Presiona entrar para averiguar mas..." << endl;
    cin.get();
    //delete adminCirculos;//que pasa si descomentas esta linea?
    return 0;
}
