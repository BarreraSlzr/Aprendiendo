#ifndef PROFESOR_H_INCLUDED
#define PROFESOR_H_INCLUDED

#include "Empleado.h"

using namespace std;

//class Profesor: Empleado{ que pasa si descomento esto?
class Profesor:public Empleado{//y comento esto?
    int codigo;
public:
    Profesor(string nombre,int codigo):
        Empleado(nombre){
        if (!fijaCodigo(codigo)){
            this->codigo=0;
        }
    }
    ~Profesor(){
        cout << "destruyendo profesor " << dameNombre() << endl;
    }
    bool fijaCodigo(int c){
        codigo=c;
        return true;
    }
    int dameCodigo(){
        return codigo;
    }
};


#endif // PROFESOR_H_INCLUDED
