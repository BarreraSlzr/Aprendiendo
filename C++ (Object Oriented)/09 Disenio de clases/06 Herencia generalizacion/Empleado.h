#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

using namespace std;

class Empleado{
    string nombre;
public:
    Empleado(string nombre){
        if (!fijaNombre(nombre)){
            this->nombre="Staff";
        }
    }
    bool fijaNombre(string n){
        nombre=n;
        return true;
    }
    string dameNombre(){
        return nombre;
    }
};

#endif // EMPLEADO_H_INCLUDED
