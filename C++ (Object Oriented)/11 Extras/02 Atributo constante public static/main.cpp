#include <iostream>
#include <string.h>
#include "Circulo.h"

using namespace std;

void imprimeCirculo(string nombre,Circulo& c){
    cout << "Propiedades del circulo " << nombre << ":" << endl;
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl << endl;
}

int main()
{
    Circulo c1(10,14,9);
    Circulo c2(10,14,9);
    Circulo c3(20,14,9);

    cout << "Usando PI=" << Circulo::PI << endl << endl;

    imprimeCirculo("c1",c1);
    imprimeCirculo("c2",c2);
    imprimeCirculo("c3",c3);

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
    return 0;
}
