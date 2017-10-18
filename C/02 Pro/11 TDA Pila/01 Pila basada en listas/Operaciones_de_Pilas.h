#ifndef OPERACIONES_DE_PILAS_H_INCLUDED
#define OPERACIONES_DE_PILAS_H_INCLUDED

#include "Operaciones_de_Listas.h"

typedef Lista Pila;

//posicion inicializa(Pila* p); funcionara el inicializa() que recibe Lista*
TipoElemento* tope(Pila* p);
TipoElemento desapila(Pila* p); //saca (pop en ingles)
void apila(TipoElemento* x,Pila* p);  //mete (push en ingles)
//booleano estaVacia(Pila* p); funcionara el estaVacia() que recibe Lista*

TipoElemento* tope(Pila* p){
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
        return NULL;
    }
    else return recupera(primero(p),p);
}

TipoElemento desapila(Pila* p){
    TipoElemento extraido;
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
    }
    else{
        extraido=*tope(p);
        suprime(primero(p),p);
    }
    return extraido;
}

void apila(TipoElemento* x,Pila* p){
    if (estaLlena(p)){
        imprimeError("La pila esta llena");
    }
    else inserta(x,primero(p),p);
}

#endif // OPERACIONES_DE_PILAS_H_INCLUDED
