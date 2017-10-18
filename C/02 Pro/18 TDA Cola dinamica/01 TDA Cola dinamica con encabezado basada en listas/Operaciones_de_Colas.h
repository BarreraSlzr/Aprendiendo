#ifndef OPERACIONES_DE_COLAS_H_INCLUDED
#define OPERACIONES_DE_COLAS_H_INCLUDED

#include "Operaciones_de_Listas.h"

typedef Lista Cola;

//posicion inicializa(Cola* c); funcionara el inicializa() que recibe Lista*
TipoElemento* frente(Cola c);
void poneEnCola(TipoElemento* x,Cola c);
TipoElemento quitaDeCola(Cola c);
//booleano estaVacia(Cola c); funcionara el estaVacia() que recibe Lista

TipoElemento* frente(Cola c){  //c ya es un apuntador
    TipoElemento* recuperado;
    if (estaVacia(c)){
        imprimeError("La cola esta vacia");
        recuperado=NULL;
    }
    else recuperado=recupera(primero(c));  //ya no necesita recibir la cola
    return recuperado;
}

void poneEnCola(TipoElemento* x,Cola c){  //c ya es un apuntador
    if (estaLlena(c)){
        imprimeError("La cola esta llena");
    }
    else inserta(x,fin(c));  //ya no necesita recibir la cola
}

TipoElemento quitaDeCola(Cola c){  //c ya es un apuntador
    TipoElemento extraido;
    if (estaVacia(c)){
        imprimeError("La cola esta vacia");
    }
    else{
        extraido=*frente(c);//que tal si comentamos esta?
        //extraido=c->sig->elemento;
        suprime(primero(c));  //ya no necesita recibir la cola
    }
    return extraido;
}

#endif // OPERACIONES_DE_COLAS_H_INCLUDED
