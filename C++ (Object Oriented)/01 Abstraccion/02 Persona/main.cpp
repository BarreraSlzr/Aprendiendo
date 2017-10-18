#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Persona{ //como registro
public:
    string curp;
    string nombre;
    long telefono;
};

int main()
{
    Persona p;
    p.curp="MUGL790912HMNXMS01";//esta es la curp correcta
    //p.curp="MUGL790912IC7";//pero me acepta curp incorrecta
    p.nombre="Luis Alberto";
    p.telefono=1234567;
    cout << "curp es " << p.curp << endl;
    cout << "nombre es " << p.nombre << endl;
    cout << "telefono es " << p.telefono << endl;
    return 0;
}
