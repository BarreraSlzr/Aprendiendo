#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Arboles.h"

void llenaRegistro(Persona* x,int clave);

int main()
{
    Arbol arbol,nodo;
    Persona v;
    Persona* u;
    int parNon=0;

    printf("Inicializando arbol...\n");
    anula(&arbol);

    printf("Insertando en arbol...\n");
    llenaRegistro(&v,10);
    inserta(&v,&arbol);
    llenaRegistro(&v,5);
    inserta(&v,&arbol);
    llenaRegistro(&v,7);
    inserta(&v,&arbol);
    llenaRegistro(&v,14);
    inserta(&v,&arbol);
    llenaRegistro(&v,12);
    inserta(&v,&arbol);
    llenaRegistro(&v,18);
    inserta(&v,&arbol);
    llenaRegistro(&v,15);
    inserta(&v,&arbol);
    llenaRegistro(&v,4);
    inserta(&v,&arbol);
    llenaRegistro(&v,3);
    inserta(&v,&arbol);
    printf("Nodos reservados %ld\n",dameCuentaNodos());

    printf("Recorrido preorden:\n");
    preorden(arbol);
    printf("\n");

    printf("Recorrido enorden:\n");
    enorden(arbol);
    printf("\n");

    printf("Recorrido postorden:\n");
    postorden(arbol);
    printf("\n");

    printf("Quitando la raiz del arbol...\n");
    u=etiqueta(arbol);
    imprime(u);
    suprime(u,&arbol);

    printf("\nSuprimiendo los demas...\n");
    while(!estaVacio(arbol)){
        if (parNon%2==0){
            printf("Buscando al maximo...");
            nodo=max(arbol);
        }
        else{
            printf("Buscando al minimo...");
            nodo=min(arbol);
        }
        parNon++;
        u=etiqueta(nodo);
        imprime(u);
        printf("\n");
        suprime(u,&arbol);
    }
    printf("Nodos reservados %ld\n",dameCuentaNodos());
    return 0;
}

void imprime(TipoElemento* x){
    printf("%d%s",x->clave,x->nombre);
}

booleano mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}

booleano menorQue(TipoElemento* x,TipoElemento* y){
    return x->clave<y->clave;
}

booleano mayorQue(TipoElemento* x,TipoElemento* y){
    return x->clave>y->clave;
}

void llenaRegistro(Persona* x,int clave){
    char nombre[TAMANO_NOMBRE];
    x->clave=clave;
    strcpy(x->nombre,"_");
    strcat(x->nombre,itoa(x->clave, nombre, 10));
    strcat(x->nombre,"o.");
}
