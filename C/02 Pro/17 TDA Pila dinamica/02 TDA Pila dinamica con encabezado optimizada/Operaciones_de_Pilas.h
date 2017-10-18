#ifndef OPERACIONES_DE_PILAS_H_INCLUDED
#define OPERACIONES_DE_PILAS_H_INCLUDED

#include "Tipos_y_Constantes.h"
#include "util.h"

typedef struct Nod{
    TipoElemento elemento;
    struct Nod* sig;
}Nodo;

typedef Nodo* posicion;
typedef posicion Pila;

long cuentaNodos=0;

posicion inicializa(Pila* p);
TipoElemento* tope(Pila p);
TipoElemento saca(Pila p);
void mete(TipoElemento* x,Pila p);
booleano estaVacia(Pila p);
booleano estaLlena();
void imprimeElemento(TipoElemento* x);
void imprimeError(char* info);
posicion reservaNodo();
void liberaNodo(posicion p);
long dameCuentaNodos();

posicion inicializa(Pila* p){
    *p=(posicion)reservaNodo();
    (*p)->sig=NULL;
    return *p;
}

TipoElemento* tope(Pila p){
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
        return NULL;
    }
    else return &(p->sig->elemento);
}

TipoElemento saca(Pila p){  //p ya es un apuntador
    TipoElemento extraido;
    if (estaVacia(p)){
        imprimeError("La pila esta vacia");
    }
    else{
        posicion nodo=p->sig;
        extraido=*tope(p);
        p->sig=nodo->sig;
        liberaNodo(nodo);
    }
    return extraido;
}

void mete(TipoElemento* x,Pila p){  //p ya es un apuntador
    if (estaLlena()){
        imprimeError("La pila esta llena");
    }
    else{
        posicion nuevo=reservaNodo();
        nuevo->elemento=*x;
        nuevo->sig=p->sig;
        p->sig=nuevo;
    }
}

booleano estaVacia(Pila p){
    return p->sig==NULL;
}

booleano estaLlena(){//se puede poner un límite para el uso de memoria
    return FALSO;
}

void imprimeError(char* info){
    printf("%s\n",info);
}

posicion reservaNodo(){
    cuentaNodos++;
    return (posicion)malloc(sizeof(Nodo));
}

void liberaNodo(posicion p){
    cuentaNodos--;
    free(p);
}

long dameCuentaNodos(){
    return cuentaNodos;
}

#endif // OPERACIONES_DE_PILAS_H_INCLUDED
