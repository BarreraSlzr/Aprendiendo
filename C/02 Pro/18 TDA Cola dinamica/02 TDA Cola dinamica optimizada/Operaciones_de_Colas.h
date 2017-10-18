#ifndef OPERACIONES_DE_COLAS_H_INCLUDED
#define OPERACIONES_DE_COLAS_H_INCLUDED

#include "Tipos_y_Constantes.h"
#include "util.h"

typedef struct Nod{
    TipoElemento elemento;
    struct Nod* sig;
}Nodo;

typedef Nodo* posicion;

typedef struct Col{
    posicion ant;
    posicion post;
}Cola;

long cuentaNodos=0;

posicion inicializa(Cola* c);
TipoElemento* frente(Cola* c);
void poneEnCola(TipoElemento* x,Cola* c);
TipoElemento quitaDeCola(Cola* c);
booleano estaVacia(Cola* c);
booleano estaLlena();
void imprimeElemento(TipoElemento* x);
void impirmeError(char* info);
posicion reservaNodo();
void liberaNodo(posicion p);
long dameCuentaNodos();

posicion inicializa(Cola* c){
    c->post=c->ant=reservaNodo();
    c->ant->sig=NULL;
    return c->ant;
}

TipoElemento* frente(Cola* c){
    TipoElemento* recuperado;
    if (estaVacia(c)){  //cambia con respecto al ejemplo anterior
        impirmeError("La cola esta vacia");
        recuperado=NULL;
    }
    else recuperado=&(c->ant->sig->elemento);
    return recuperado;
}

void poneEnCola(TipoElemento* x,Cola* c){
    if (estaLlena(c)){
        impirmeError("La cola esta llena");
    }
    else{
        c->post->sig=reservaNodo();
        c->post=c->post->sig;
        c->post->elemento=*x;
        c->post->sig=NULL;//sera necesario esto?...pues si (ver archivo .txt)
    }
}

TipoElemento quitaDeCola(Cola* c){  //c ya es un apuntador
    TipoElemento extraido;
    if (estaVacia(c)){
        impirmeError("La cola esta vacia");
    }
    else{
        posicion temp=c->ant;
        extraido=*frente(c);//que tal si comentamos esta?
        //extraido=temp->sig->elemento;//y descomentamos esta
        c->ant=temp->sig;
        liberaNodo(temp);
        //y si quisieramos conservar el nodo encabezado inicial...
        /*posicion temp=c->ant->sig;//esta linea resulto ser mas ineficiente
        extraido=*frente(c);
        c->ant->sig=temp->sig;
        liberaNodo(temp);*/
    }
    return extraido;
}

booleano estaVacia(Cola* c){
    return c->ant==c->post;
}

booleano estaLlena(){//se puede poner un límite para el uso de memoria
    return FALSO;
}

void impirmeError(char* info){
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

#endif // OPERACIONES_DE_COLAS_H_INCLUDED
