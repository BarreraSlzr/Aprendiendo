#ifndef OPERACIONES_DE_LISTAS_DOBLEMENTE_LIGADAS_H_INCLUDED
#define OPERACIONES_DE_LISTAS_DOBLEMENTE_LIGADAS_H_INCLUDED

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
posicion siguiente(posicion p);
posicion anterior(posicion p);
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
    posicion nuevo=reservaNodo();
    nuevo->elemento=*x;
    nuevo->sig=p->sig;
    nuevo->ant=p;
    p->sig=nuevo;
    if (nuevo->sig!=NULL)
        nuevo->sig->ant=nuevo;
}

posicion localiza(TipoElemento* x,Lista l){
    posicion p;
    for(p=l->sig;p!=NULL;p=p->sig){
        if (mismo(recupera(p),x))
            return p;
    }
    return NULL;
}

TipoElemento* recupera(posicion p){
    return &(p->elemento);
}

void suprime(posicion p){
    posicion nodo;
    if ((nodo=p->sig)!=NULL)
        nodo->ant=p->ant;
    p->ant->sig=p->sig;  //nunca se deberia suprimir el encabezado
    liberaNodo(p);
}

posicion siguiente(posicion p){
    return p->sig;  //es posible utilizar el valor NULL para comprobar que ya se llego al final
}

posicion anterior(posicion p){
    return p->ant;  //se puede comparar el resultado contra el encabezado o contra primero(l)
}

posicion inicializa(Lista* l){
    *l=reservaNodo();
    (*l)->sig=NULL;
    (*l)->ant=NULL;
    return *l;
}

posicion primero(Lista l){
    return l->sig;
}

void imprimeLista(Lista l){
    posicion p;
    int cuentaLineas=0;
    for(p=l->sig;p!=NULL;p=p->sig){
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
