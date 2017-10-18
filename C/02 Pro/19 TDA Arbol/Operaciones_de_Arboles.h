#ifndef OPERACIONES_DE_ARBOLES_H_INCLUDED
#define OPERACIONES_DE_ARBOLES_H_INCLUDED

#include "Tipos_y_Constantes.h"

typedef struct Nod{
    TipoElemento elemento;
    struct Nod* hijo_izq;
    struct Nod* hijo_der;
}Nodo;

typedef Nodo* Arbol;

long cuentaNodos=0;

void anula(Arbol* a);
booleano estaVacio(Arbol a);
void inserta(TipoElemento* x,Arbol* a);
void suprime(TipoElemento* x,Arbol* a);
booleano miembro(TipoElemento* x,Arbol a);
TipoElemento* etiqueta(Arbol nodo);
Arbol encuentra(TipoElemento* x,Arbol a);
Arbol min(Arbol a);
Arbol max(Arbol a);
TipoElemento suprimeMin(Arbol* a);
Arbol padre(Arbol nodo,Arbol a);
void preorden(Arbol a);
void enorden(Arbol a);
void postorden(Arbol a);
void imprime(TipoElemento* x);
booleano mismo(TipoElemento* x,TipoElemento* y);
booleano menorQue(TipoElemento* x,TipoElemento* y);
booleano mayorQue(TipoElemento* x,TipoElemento* y);
Arbol reservaNodo();
void liberaNodo(Arbol nodo);
long dameCuentaNodos();

Arbol reservaNodo(){
    cuentaNodos++;
    return (Arbol)malloc(sizeof(Nodo));
}

void liberaNodo(Arbol nodo){
    cuentaNodos--;
    free(nodo);
}

long dameCuentaNodos(){
    return cuentaNodos;
}

#endif // OPERACIONES_DE_COLAS_H_INCLUDED
