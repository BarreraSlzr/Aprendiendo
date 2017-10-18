#ifndef TIPOS_Y_CONSTANTES_H_INCLUDED
#define TIPOS_Y_CONSTANTES_H_INCLUDED

#include <sstream>
#include "util.h"

using namespace std;

#define MAX_LINEAS_POR_PAGINA 20

class Persona:public Objeto{
public:
    int clave;
    string nombre;
    virtual string dameCadena(){
        stringstream s;
        s << "Clave=" << clave << ", Nombre=" << nombre;
        return s.str();
    }
    virtual bool esIgualA(Objeto& x){
        Persona* p=dynamic_cast<Persona*>(&x);
        return p!=NULL && clave==p->clave;
    }
};

class Computadora:public Objeto{
public:
    string marca;
    string modelo;
    virtual string dameCadena(){
        stringstream s;
        s << "Marca=" << marca << ", Modelo=" << modelo;
        return s.str();
    }
    virtual bool esIgualA(Objeto& x){
        Computadora* c=dynamic_cast<Computadora*>(&x);
        return marca.compare(c->marca)==0 && modelo.compare(c->modelo)==0;
    }
};
#endif // TIPOS_Y_CONSTANTES_H_INCLUDED
