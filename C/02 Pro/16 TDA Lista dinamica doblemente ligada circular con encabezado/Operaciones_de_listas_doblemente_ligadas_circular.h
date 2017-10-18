#ifndef OPERACIONES_DE_LISTAS_DOBLEMENTE_LIGADAS_CIRCULAR_H_INCLUDED
#define OPERACIONES_DE_LISTAS_DOBLEMENTE_LIGADAS_CIRCULAR_H_INCLUDED

#include <stdlib.h>
#include "Tipos_y_Constantes.h"
#include "util.h"

typedef struct Nod{
    TipoElemento elemento;
    struct Nod* sig;
    struct Nod* ant;
}Nodo;

typedef Nodo* posicion;
typedef posicion Lista;

long cuentaNodos=0;

void inserta(TipoElemento* x, posicion p);
posicion localiza(TipoElemento* x,Lista l);
TipoElemento* recupera(posicion p);
void suprime(posicion p);
posicion siguiente(posicion p,Lista l);
posicion anterior(posicion p,Lista l);
posicion anula(Lista* l);
posicion primero(Lista l);
void imprimeLista(Lista l);
posicion fin(Lista l);
booleano estaVacia(Lista l);
booleano estaLlena();
void imprime(TipoElemento* x);
void error(char* info);
booleano mismo(TipoElemento* x,TipoElemento* y);
posicion reservaNodo();
void liberaNodo(posicion p);
long dameCuentaNodos();

void inserta(TipoElemento* x,posicion p){
    posicion nuevo=reservaNodo();
    nuevo->elemento=*x;
    nuevo->sig=p->sig;
    nuevo->ant=p;
    p->sig=nuevo;
    nuevo->sig->ant=nuevo;  //ya no se necesita if (nuevo->sig!=NULL)
}

posicion localiza(TipoElemento* x,Lista l){
    posicion p;
    for(p=l->sig;p!=l;p=p->sig){
        if (mismo(recupera(p),x))
            return p;
    }
    return NULL;
}

TipoElemento* recupera(posicion p){
    return &(p->elemento);
}

void suprime(posicion p){
    p->sig->ant=p->ant;
    p->ant->sig=p->sig;
    liberaNodo(p);
}

posicion siguiente(posicion p,Lista l){
    posicion nodo=p->sig;
    if (nodo==l)
        nodo=nodo->sig;
    return nodo;
}

posicion anterior(posicion p,Lista l){
    posicion nodo=p->ant;
    if (nodo==l)
        nodo=nodo->ant;
    return nodo;
}

posicion anula(Lista* l){
    *l=reservaNodo();
    (*l)->sig=*l;
    (*l)->ant=*l;
    return *l;
}

posicion primero(Lista l){
    return l->sig;
}

void imprimeLista(Lista l){
    posicion p;
    int cuentaLineas=0;
    for(p=l->sig;p!=l;p=p->sig){
        imprime(recupera(p));
        printf("\n");
        cuentaLineas++;
        if (cuentaLineas%MAX_LINEAS_POR_PAGINA==0){
            pausar();
        }
    }
}

posicion fin(Lista l){
    return l->ant;
}

booleano estaVacia(Lista l){
    return l->sig==l;
}

booleano estaLlena(){//se puede poner un límite para el uso de memoria
    return FALSO;
}

void error(char* info){
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

#endif // OPERACIONES_DE_LISTAS_DOBLEMENTE_LIGADAS_CIRCULAR_H_INCLUDED
