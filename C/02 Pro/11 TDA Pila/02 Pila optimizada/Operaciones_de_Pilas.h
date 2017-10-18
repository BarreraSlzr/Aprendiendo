#ifndef OPERACIONES_DE_PILAS_H_INCLUDED
#define OPERACIONES_DE_PILAS_H_INCLUDED

#include "Tipos_y_Constantes.h"

#define MAX_ELEMENTOS 3

typedef Persona TipoElemento;
typedef int posicion;

typedef struct{
    TipoElemento elementos[MAX_ELEMENTOS];
    posicion tope;
}Pila;

void inicializa(Pila* p);
TipoElemento* tope(Pila* p);
TipoElemento desapila(Pila* p);
void apila(TipoElemento* x,Pila* p);
booleano estaVacia(Pila* p);
booleano estaLlena(Pila* p);
void imprimeError(char* info);

void inicializa(Pila* p){
    p->tope=-1;
}

TipoElemento* tope(Pila* p){
    TipoElemento* recuperado;
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
        recuperado=NULL;
    }
    else recuperado=&(p->elementos[p->tope]);
    return recuperado;
}

TipoElemento desapila(Pila* p){
    TipoElemento extraido;
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
    }
    else{
        extraido=*tope(p);
        p->tope--;
    }
    return extraido;
}

void apila(TipoElemento* x,Pila* p){
    if (estaLlena(p)){
        imprimeError("La pila esta llena");
    }
    else{
        p->elementos[++p->tope]=*x;
    }
}

booleano estaVacia(Pila* p){
    return p->tope<0;
}

booleano estaLlena(Pila* p){
    return p->tope>=MAX_ELEMENTOS-1;
}

void imprimeError(char* info){
    printf("ERROR DEL PROGRAMADOR %s\n",info);
}

#endif // OPERACIONES_DE_PILAS_H_INCLUDED
