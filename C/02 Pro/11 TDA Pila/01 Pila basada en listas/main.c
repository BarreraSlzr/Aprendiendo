#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Pilas.h"

int main()
{
    Pila pila;
    Persona x,y,z,v;
    Persona* u;

    x.clave=1;
    strcpy(x.nombre,"primero");
    y.clave=2;
    strcpy(y.nombre,"segundo");
    z.clave=3;
    strcpy(z.nombre,"tercero");
    v.clave=4;
    strcpy(v.nombre,"cuarto");

    printf("Inicializando pila...\n");
    inicializa(&pila);
    printf("Metiendo en pila...\n");
    apila(&x,&pila);
    apila(&y,&pila);
    apila(&z,&pila);
    apila(&v,&pila);
    printf("Muestreando el tope...");
    u=tope(&pila);
    imprimeElemento(u);
    printf("\nSacando de pila...\n");
    while(!estaVacia(&pila)){
        v=desapila(&pila);
        imprimeElemento(&v);
        printf("\n");
    }
    v=desapila(&pila);
    return 0;
}

void imprimeElemento(TipoElemento* x){
    printf("Clave=%d, Nombre=%s",x->clave,x->nombre);
}

booleano mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}


