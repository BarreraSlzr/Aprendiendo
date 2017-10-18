#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <iostream>
#include "Tipos_y_Constantes.h"
#include "util.h"

class Nodo{
public:
    TipoElemento elemento;
    Nodo* sig;
};

typedef Nodo* posicion;
const posicion POSICION_ERROR=NULL;

class Lista{
    posicion encabezado;
    long cuentaNodos;
    posicion reservaNodo();
    void liberaNodo(posicion p);
    string nombre;
public:
    Lista();
    ~Lista();
    void inserta(TipoElemento x, posicion p);
    posicion localiza(TipoElemento x);
    TipoElemento recupera(posicion p);
    void suprime(posicion p);
    posicion siguiente(posicion p);
    posicion anterior(posicion p);
    posicion primero();
    void imprimeLista();
    posicion fin();
    bool estaVacia();
    bool estaLlena();
    void imprimeElemento(TipoElemento x);
    void imprimeError(string info);
    bool mismo(TipoElemento x,TipoElemento y);
    void inserta(TipoElemento x);
    posicion ultimo();
    int longitud();
    Lista* concatenar(Lista* l);
    long dameCuentaNodos();
    void fijaNombre(string n);
    string dameNombre();
};


#endif // LISTA_H_INCLUDED
