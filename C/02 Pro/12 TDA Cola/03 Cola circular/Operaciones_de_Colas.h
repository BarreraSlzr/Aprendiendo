#ifndef OPERACIONES_DE_COLAS_H_INCLUDED
#define OPERACIONES_DE_COLAS_H_INCLUDED

#include "Tipos_y_Constantes.h"

#define MAX_ELEMENTOS 4

typedef Persona TipoElemento;
typedef int posicion;

typedef struct{
    TipoElemento elementos[MAX_ELEMENTOS];
    posicion ant;
    posicion post;
}Cola;

posicion sumaUno(posicion i);
void inicializa(Cola* c);
TipoElemento* frente(Cola* c);
void encola(TipoElemento* x,Cola* c);
TipoElemento desencola(Cola* c);
booleano estaVacia(Cola* c);
booleano estaLlena(Cola* c);
void imprimeError(char* info);

posicion sumaUno(posicion i){
    return ((i+1)%MAX_ELEMENTOS);
}

void inicializa(Cola* c){
    c->ant=0;
    c->post=MAX_ELEMENTOS-1;
}

TipoElemento* frente(Cola* c){
    TipoElemento* recuperado;
    if (estaVacia(c)){
        imprimeError("La cola esta vacia");
        recuperado=NULL;
    }
    else recuperado=&(c->elementos[c->ant]);
    return recuperado;
}

void encola(TipoElemento* x,Cola* c){
    if (estaLlena(c)){
        imprimeError("La cola esta llena");
    }
    else{
        c->post=sumaUno(c->post);
        c->elementos[c->post]=*x;
    }
}

TipoElemento desencola(Cola* c){
    TipoElemento extraido;
    if (estaVacia(c)){
        imprimeError("La cola esta vacia");
    }
    else{
        extraido=*frente(c);
        c->ant=sumaUno(c->ant);
    }
    return extraido;
}

booleano estaVacia(Cola* c){
    return sumaUno(c->post)==c->ant;
}

booleano estaLlena(Cola* c){
    return sumaUno(sumaUno(c->post))==c->ant;
}

void imprimeError(char* info){
    printf("ERROR DEL PROGRAMADOR %s\n",info);
}

#endif // OPERACIONES_DE_COLAS_H_INCLUDED
