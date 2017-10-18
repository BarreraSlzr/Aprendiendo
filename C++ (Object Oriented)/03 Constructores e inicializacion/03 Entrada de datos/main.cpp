#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Persona{ //como clase
    string curp;
    string nombre;
    long telefono;
public:
    Persona(){//Constructor
        curp="AAAA000000AAAAAA00";
        nombre="Staff";
        telefono=0;
    }
    void fijaCurp(string curpx){
        curp=curpx;
    }
    void fijaNombre(string nombrex){
        nombre=nombrex;
    }
    void fijaTelefono(long telefonox){
        telefono=telefonox;
    }
    string dameCurp(){
        return curp;
    }
    string dameNombre(){
        return nombre;
    }
    long dameTelefono(){
        return telefono;
    }
};

int main()
{
    Persona p;
    string curp,nombre;
    long telefono;
    cout << "Valores iniciales:" << endl;
    cout << "curp es " << p.dameCurp() << endl;
    cout << "nombre es " << p.dameNombre() << endl;
    cout << "telefono es " << p.dameTelefono() << endl;
    cout << "Dame la curp: ";
    cin >> curp;
    cout << "Dame el nombre: ";
    cin.ignore();
    getline(cin,nombre);
    cout << "Dame el telefono: ";
    cin >> telefono;
    p.fijaCurp(curp);//invocacion a metodo fijaCurp()
    p.fijaNombre(nombre);
    p.fijaTelefono(telefono);
    cout << "Valores finales:" << endl;
    cout << "curp es " << p.dameCurp() << endl;
    cout << "nombre es " << p.dameNombre() << endl;
    cout << "telefono es " << p.dameTelefono() << endl;
    return 0;
}
