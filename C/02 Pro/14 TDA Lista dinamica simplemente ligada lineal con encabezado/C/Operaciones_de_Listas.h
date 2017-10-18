#ifndef OPERACIONES_DE_LISTAS_H_INCLUDED
#define OPERACIONES_DE_LISTAS_H_INCLUDED

#include <stdlib.h>
#include "Tipos_y_Constantes.h"
#include "util.h"

typedef struct Nod{
    TipoElemento elemento;
    struct Nod* sig;
}Nodo;

typedef Nodo* posicion;
typedef posicion Lista;

long cuentaNodos=0;

void inserta(TipoElemento* x, posicion p);
posicion localiza(TipoElemento* x,Lista l);
TipoElemento* recupera(posicion p);
void suprime(posicion p);
posicion siguiente(posicion p);
posicion anterior(posicion p,Lista l);
posicion inicializa(Lista* l);
posicion primero(Lista l);
void imprimeLista(Lista l);
posicion fin(Lista l);
booleano estaVacia(Lista l);
booleano estaLlena();
void imprimeElemento(TipoElemento* x);
void imprimeError(char* info);
booleano mismo(TipoElemento* x,TipoElemento* y);
posicion reservaNodo();
void liberaNodo(posicion p);
long dameCuentaNodos();

void inserta(TipoElemento* x,posicion p){
    posicion temp=p->sig;
    p->sig=reservaNodo();
    p->sig->elemento=*x;
    p->sig->sig=temp;
}

posicion localiza(TipoElemento* x,Lista l){
    posicion p;
    for(p=l;p->sig!=NULL;p=p->sig){
        if (mismo(recupera(p),x))
            return p;
    }
    return p;//fin(l)
}

TipoElemento* recupera(posicion p){
    posicion nodo=p->sig;
    if (nodo!=NULL){
        return &(nodo->elemento);
    }
    else{
        imprimeError("Solicita recuperar de un nodo que no existe");
        return NULL;
    }
}

void suprime(posicion p){
    posicion nodo=p->sig;
    if (nodo!=NULL){
        p->sig=nodo->sig;
        liberaNodo(nodo);
    }
    else{
        imprimeError("Solicita suprimir un nodo que no existe");
    }
}

posicion siguiente(posicion p){
    posicion nodo=p->sig;
    if (nodo==NULL)
        imprimeError("Posicion siguiente no existe");
    return nodo;
}

posicion anterior(posicion p,Lista l){
    posicion ant;
    ant=l;
    while(ant!=NULL && ant->sig!=p){
        ant=ant->sig;
    }
    if (ant==NULL)
        imprimeError("Posicion anterior no existe");
    return ant;
}

posicion inicializa(Lista* l){
    *l=reservaNodo();
    (*l)->sig=NULL;
    return *l;//fin(l)
}

posicion primero(Lista l){
    return l;
}

void imprimeLista(Lista l){
    posicion p;
    int cuentaLineas=0;
    for(p=l;p->sig!=NULL;p=p->sig){
        imprimeElemento(recupera(p));
        printf("\n");
        cuentaLineas++;
        if (cuentaLineas%MAX_LINEAS_POR_PAGINA==0){
            pausar();
        }
    }
}

posicion fin(Lista l){
    posicion p=l;
    while(p->sig!=NULL){
        p=p->sig;
    }
    return p;
}

booleano estaVacia(Lista l){
    return l->sig==NULL;
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

#endif // OPERACIONES_DE_LISTAS_H_INCLUDED
