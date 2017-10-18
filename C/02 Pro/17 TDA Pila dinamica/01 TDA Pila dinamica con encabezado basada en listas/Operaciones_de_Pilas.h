#ifndef OPERACIONES_DE_PILAS_H_INCLUDED
#define OPERACIONES_DE_PILAS_H_INCLUDED

#include "Operaciones_de_Listas.h"

typedef Lista Pila;

//posicion inicializa(Pila* p); funcionara el inicializa() que recibe Lista*
TipoElemento* tope(Pila p);
TipoElemento saca(Pila p); //pop
void mete(TipoElemento* x,Pila p); //push
//booleano estaVacia(Pila p); funcionara el estaVacia() que recibe Lista

TipoElemento* tope(Pila p){  //p ya es un apuntador
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
        return NULL;
    }
    else return recupera(primero(p));//ya no necesita recibir p como con arreglos y cursores
}

TipoElemento saca(Pila p){  //p ya es un apuntador
    TipoElemento extraido;
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
    }
    else{
        extraido=*tope(p);
        suprime(primero(p));  //ya no necesita recibir p como con arreglos y cursores
    }
    return extraido;
}

void mete(TipoElemento* x,Pila p){  //p ya es un apuntador
    if (estaLlena()){
        imprimeError("La pila esta llena");
    }
    else inserta(x,primero(p));  //ya no necesita recibir p como con arreglos y cursores
}

#endif // OPERACIONES_DE_PILAS_H_INCLUDED
