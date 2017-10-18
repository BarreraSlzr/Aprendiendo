#ifndef OPERACIONES_DE_LISTAS_H_INCLUDED
#define OPERACIONES_DE_LISTAS_H_INCLUDED

#include <iostream>

class Nodo{
public:
    void* elemento;
    Nodo* sig;
};

typedef Nodo* posicion;
const posicion POSICION_ERROR=NULL;

using namespace std;

template<class TipoElemento>
class Lista{
    posicion encabezado;
    long cuentaNodos;
    posicion reservaNodo();
    void liberaNodo(posicion p);
    string nombre;
    bool eliminaElementos;
public:
    Lista();
    ~Lista();
    void inserta(TipoElemento* x, posicion p);
    void inserta(TipoElemento* x);
    posicion localiza(TipoElemento* x);
    TipoElemento* recupera(posicion p);
    TipoElemento* suprime(posicion p);
    posicion siguiente(posicion p);
    posicion anterior(posicion p);
    posicion primero();
    void imprimeLista();
    posicion fin();
    posicion ultimo();
    bool estaVacia();
    bool estaLlena();
    void imprimeError(string info);
    bool mismo(TipoElemento* x,TipoElemento* y);
    int dameLongitud();
    Lista<TipoElemento>* concatenar(Lista& l);
    void fijaNombre(string n);
    string dameNombre();
    void fijaEliminaElementos(bool siElimina);
    long dameCuentaNodos();
};

template<class TipoElemento>
Lista<TipoElemento>::Lista(){//constructor
    nombre="Sin Nombre";
    cuentaNodos=0;
    encabezado=reservaNodo();
    encabezado->sig=NULL;
    eliminaElementos=false;
}

template<class TipoElemento>
void Lista<TipoElemento>::fijaEliminaElementos(bool siElimina){
    eliminaElementos=siElimina;
}

template<class TipoElemento>
void Lista<TipoElemento>::fijaNombre(string n){
    nombre=n;
}

template<class TipoElemento>
string Lista<TipoElemento>::dameNombre(){
    return nombre;
}

template<class TipoElemento>
Lista<TipoElemento>::~Lista(){//destructor
    cout << "Eliminando Lista " << dameNombre() << endl;
    if (eliminaElementos){
        while(!estaVacia()){
            delete suprime(primero());
        }
    }
    cout << "liberando encabezado de " << dameNombre() << endl;
    liberaNodo(encabezado);
}

template<class TipoElemento>
void Lista<TipoElemento>::inserta(TipoElemento* x, posicion p){
    posicion temp=p->sig;
    p->sig=reservaNodo();
    p->sig->elemento=x;
    p->sig->sig=temp;
}

template<class TipoElemento>
void Lista<TipoElemento>::inserta(TipoElemento* x){
    inserta(x,fin());
}

template<class TipoElemento>
posicion Lista<TipoElemento>::localiza(TipoElemento* x){
    posicion p;
    for(p=encabezado;p->sig!=NULL;p=p->sig){
        if (mismo(recupera(p),x))
            return p;
    }
    return p;//fin(l)
}

template<class TipoElemento>
TipoElemento* Lista<TipoElemento>::recupera(posicion p){
    posicion nodo=p->sig;
    if (nodo!=NULL){
        return (TipoElemento*)(nodo->elemento);
    }
    else{
        imprimeError("Solicita recuperar de un nodo que no existe");
        return NULL;
    }
}

template<class TipoElemento>
TipoElemento* Lista<TipoElemento>::suprime(posicion p){
    posicion nodo=p->sig;
    TipoElemento* eliminable;
    if (nodo!=NULL){
        p->sig=nodo->sig;
        eliminable=(TipoElemento*)(nodo->elemento);
        liberaNodo(nodo);
        return eliminable;
    }
    else{
        imprimeError("Solicita suprimir un nodo que no existe");
        return NULL;
    }
}

template<class TipoElemento>
posicion Lista<TipoElemento>::siguiente(posicion p){
    posicion nodo=p->sig;
    if (nodo==NULL)
        imprimeError("Posicion siguiente no existe");
    return nodo;
}

template<class TipoElemento>
posicion Lista<TipoElemento>::anterior(posicion p){
    posicion ant;
    ant=encabezado;
    while(ant!=NULL && ant->sig!=p){
        ant=ant->sig;
    }
    if (ant==NULL)
        imprimeError("Posicion anterior no existe");
    return ant;
}

template<class TipoElemento>
posicion Lista<TipoElemento>::primero(){
    if (!estaVacia())
        return encabezado;
    else return fin();//si vacia regresa encabezado
}

template<class TipoElemento>
posicion Lista<TipoElemento>::fin(){
    posicion p=encabezado;
    while(p->sig!=NULL){
        p=p->sig;
    }
    return p;
}

template<class TipoElemento>
posicion Lista<TipoElemento>::ultimo(){
    if (estaVacia()){
        return POSICION_ERROR;
    }
    else{
        return anterior(fin());
    }
}

template<class TipoElemento>
bool Lista<TipoElemento>::estaVacia(){
    return encabezado->sig==NULL;
}

template<class TipoElemento>
bool Lista<TipoElemento>::estaLlena(){
    return false;
}

template<class TipoElemento>
void Lista<TipoElemento>::imprimeError(string info){
    cout << "ERROR DEL PROGRAMADOR: " << info << endl;
}

template<class TipoElemento>
int Lista<TipoElemento>::dameLongitud(){
    return cuentaNodos-1;
}

template<class TipoElemento>
Lista<TipoElemento>* Lista<TipoElemento>::concatenar(Lista& l){
    Lista<TipoElemento>* m=new Lista;
    posicion p=primero(),q=fin();
    while(!m->estaLlena() && p!=q){
        m->inserta(recupera(p));
        p=siguiente(p);
    }
    p=l.primero();
    q=l.fin();
    while(!m->estaLlena() && p!=q){
        m->inserta(l.recupera(p));
        p=l.siguiente(p);
    }
    return m;
}

template<class TipoElemento>
posicion Lista<TipoElemento>::reservaNodo(){
    cuentaNodos++;
    return new Nodo;
}

template<class TipoElemento>
void Lista<TipoElemento>::liberaNodo(posicion p){
    cout << "liberando nodo de " << dameNombre() << endl;
    cuentaNodos--;
    delete p;
}

template<class TipoElemento>
long Lista<TipoElemento>::dameCuentaNodos(){
    return cuentaNodos;
}

#endif // OPERACIONES_DE_LISTAS_H_INCLUDED
