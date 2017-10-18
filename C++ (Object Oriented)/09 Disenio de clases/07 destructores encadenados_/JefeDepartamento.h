#ifndef JEFEDEPARTAMENTO_H_INCLUDED
#define JEFEDEPARTAMENTO_H_INCLUDED

#include "Empleado.h"

using namespace std;

class JefeDepartamento:public Empleado{
    string departamento;
public:
    JefeDepartamento(string nombre,string departamento):
        Empleado(nombre){
        if (!fijaDepartamento(departamento)){
            this->departamento="Sin Departamento";
        }
    }
    ~JefeDepartamento(){
        cout << "destruyendo jefe " << dameNombre() << endl;
    }
    bool fijaDepartamento(string d){
        departamento=d;
        return true;
    }
    string dameDepartamento(){
        return departamento;
    }
};


#endif // JEFEDEPARTAMENTO_H_INCLUDED
