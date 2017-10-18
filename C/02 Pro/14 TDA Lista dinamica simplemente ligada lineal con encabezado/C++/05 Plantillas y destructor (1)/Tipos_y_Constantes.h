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
    Persona(int clave,string nombre){
        this->clave=clave;
        this->nombre=nombre;
    }
    virtual ~Persona(){
        cout << "destruyendo " << dameCadena() << endl;
    }
    string dameCadena(){
        stringstream s;
        s << "Clave=" << clave << ", Nombre=" << nombre;
        return s.str();
    }
    bool esIgualA(Objeto* x){
        Persona* p=dynamic_cast<Persona*>(x);
        return p!=NULL && clave==p->clave;
    }
};

class Computadora:public Objeto{
public:
    string marca;
    string modelo;
    Computadora(string marca,string modelo){
        this->marca=marca;
        this->modelo=modelo;
    }
    virtual ~Computadora(){
        cout << "destruyendo " << dameCadena() << endl;
    }
    string dameCadena(){
        stringstream s;
        s << "Marca=" << marca << ", Modelo=" << modelo;
        return s.str();
    }
    bool esIgualA(Objeto* x){
        Computadora* c=dynamic_cast<Computadora*>(x);
        return marca.compare(c->marca)==0 && modelo.compare(c->modelo)==0;
    }
};
#endif // TIPOS_Y_CONSTANTES_H_INCLUDED
