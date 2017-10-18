#include <iostream>
#include <string.h>
#include "Circulo.h"

using namespace std;

int main()
{
    Circulo* c=new Circulo(20,14,10);

    cout << "Propiedades del circulo" << endl;
    cout << "La info del circulo es: ***" << c->dameInfo() << "***" << endl;
    delete c;//que pasa si comento esta linea?
    return 0;
}
