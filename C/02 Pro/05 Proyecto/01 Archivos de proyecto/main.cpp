#include <iostream>

#include "Persona.h"

using namespace std;

int main()
{
    //Persona luis("Luis Alberto");
    Persona* luis=new Persona("Luis Alberto");
    //cout << luis.dameNombre() << endl;
    cout << luis->dameNombre() << endl;
    cout << "Presione entrar para continuar..." << endl;
    cin.get();
    delete luis;
    return 0;
}
