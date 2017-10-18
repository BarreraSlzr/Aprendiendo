#include <iostream>
#include <string.h>
#include "Circulo.h"

using namespace std;

void imprimeCirculo(Circulo& c);

int main()
{
    Circulo c1(10,14,9);
    Circulo c2(10,14,9);
    Circulo c3(20,14,9);

    cout << "Propiedades del circulo c1:" << endl;
    imprimeCirculo(c1);
    cout << "Propiedades del circulo c2:" << endl;
    imprimeCirculo(c2);
    cout << "Propiedades del circulo c3:" << endl;
    imprimeCirculo(c3);

    if (c1.esIgualA(c2)){
        cout << "c1 es igual a c2" << endl;
    }
    else{
        cout << "c1 NO es igual a c2" << endl;
    }
    if (c1.esIgualA(c3)){
        cout << "c1 es igual a c3" << endl;
    }
    else{
        cout << "c1 NO es igual a c3" << endl;
    }
    if (c2.esIgualA(&c3)){
        cout << "c2 es igual a c3" << endl;
    }
    else{
        cout << "c2 NO es igual a c3" << endl;
    }
    return 0;
}

void imprimeCirculo(Circulo& c){//paso de parametro por referencia
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl << endl;
}
