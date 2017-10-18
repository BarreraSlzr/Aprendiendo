#ifndef OPERACIONES_DE_ARBOLES_H_INCLUDED
#define OPERACIONES_DE_ARBOLES_H_INCLUDED

#include "Tipos_y_Constantes.h"

typedef struct Nod{
    TipoElemento elemento;
    struct Nod* hijo_izq;
    struct Nod* hijo_der;
    int altura;
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
int altura(Arbol a);
void actualizarAltura(Arbol a);
void rotarSimple(Arbol* a, booleano izq);
void rotarDoble(Arbol* a, booleano izq);
void balancear(Arbol* a);
void imprime(TipoElemento* x);
booleano mismo(TipoElemento* x,TipoElemento* y);
booleano menorQue(TipoElemento* x,TipoElemento* y);
booleano mayorQue(TipoElemento* x,TipoElemento* y);
Arbol reservaNodo();
void liberaNodo(Arbol nodo);
long dameCuentaNodos();

int altura(Arbol a){
    if (estaVacio(a)){
        return -1;
    }
    else{
        return a->altura;
    }
}

void actualizarAltura(Arbol a){
    int alturaIzq,alturaDer;
    if (!estaVacio(a)){
        alturaIzq=altura(a->hijo_izq);
        alturaDer=altura(a->hijo_der);
        a->altura=1+((alturaIzq<alturaDer)?alturaDer:alturaIzq);
    }
}

void rotarSimple(Arbol* a, booleano izq){
    Arbol t1;
    if (izq){
        t1=(*a)->hijo_izq;
        (*a)->hijo_izq=t1->hijo_der;
        t1->hijo_der=*a;
    }
    else{
        t1=(*a)->hijo_der;
        (*a)->hijo_der=t1->hijo_izq;
        t1->hijo_izq=*a;
    }
    actualizarAltura(*a);
    actualizarAltura(t1);
    *a=t1;  //nueva raiz
}

void rotarDoble(Arbol* a, booleano izq){
    if (izq){  //rotacion izquierda
        rotarSimple(&((*a)->hijo_izq),FALSO);
        rotarSimple(a,VERDADERO);
    }
    else{
        rotarSimple(&((*a)->hijo_der),VERDADERO);
        rotarSimple(a,FALSO);
    }
    //las alturas se actualizan en las rotaciones simples
}

void balancear(Arbol* a){
    if (!estaVacio(*a)){  //desequilibrio hacia la izquierda
        int diferenciaAltura=altura((*a)->hijo_der)-altura((*a)->hijo_izq);
        if (diferenciaAltura==-2){  //desequilibrio hacia la izquierda
            if (altura((*a)->hijo_izq->hijo_izq) >= altura((*a)->hijo_izq->hijo_der)){
                rotarSimple(a,VERDADERO);  //desequilibrio simple hacia la izquierda
            }
            else{
                rotarDoble(a,VERDADERO);  //desequilibrio doble hacia la izquierda
            }
        }
        else if (diferenciaAltura==2){  //desequilibrio hacia la derecha
            if (altura((*a)->hijo_der->hijo_der) >= altura((*a)->hijo_der->hijo_izq)){
                rotarSimple(a,FALSO);  //desequilibrio simple hacia la derecha
            }
            else{
                rotarDoble(a,FALSO);  //desequilibrio doble hacia la derecha
            }
        }
    }
}

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
