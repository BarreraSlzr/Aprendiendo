#ifndef OPERACIONES_DE_COLAS_H_INCLUDED
#define OPERACIONES_DE_COLAS_H_INCLUDED

#include "Operaciones_de_Listas.h"

typedef Lista Cola;

//posicion inicializa(Cola* c); funcionara el inicializa() que recibe Lista*
TipoElemento* frente(Cola* c);
void encola(TipoElemento* x,Cola* c);
TipoElemento desencola(Cola* c);
//booleano estaVacia(Cola* c); funcionara el estaVacia() que recibe Lista*

TipoElemento* frente(Cola* c){
    if (estaVacia(c)){
        imprimeError("La cola esta vacia");
        return NULL;
    }
    else return recupera(primero(c),c);
}

void encola(TipoElemento* x,Cola* c){
    if (estaLlena(c)){
        imprimeError("La cola esta llena");
    }
    else inserta(x,fin(c),c);
}

TipoElemento desencola(Cola* c){
    TipoElemento extraido;
    if (estaVacia(c)){
        imprimeError("La cola esta vacia");
    }
    else{
        extraido=*frente(c);
        suprime(primero(c),c);
    }
    return extraido;
}

#endif // OPERACIONES_DE_COLAS_H_INCLUDED
