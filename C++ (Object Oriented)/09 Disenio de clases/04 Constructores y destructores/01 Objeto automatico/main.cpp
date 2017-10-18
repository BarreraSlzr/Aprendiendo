#include <iostream>
#include <string.h>
#include "Circulo.h"

using namespace std;

int main()
{
    Circulo c(20,14,10);

    cout << "Propiedades del circulo" << endl;
    cout << "La info del circulo es: ***" << c.dameInfo() << "***" << endl;
    return 0;
}
