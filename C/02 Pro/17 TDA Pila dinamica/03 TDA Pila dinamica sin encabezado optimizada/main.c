#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Pilas.h"

int main()
{
    Pila pila;
    Persona x,y,z,v;
    Persona* u;

    printf("Nodos reservados %ld\n",dameCuentaNodos());
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
    mete(&x,&pila);
    mete(&y,&pila);
    mete(&z,&pila);
    mete(&v,&pila);  //ahora ya puede meter el cuarto elemento pues no hay un MAX_ELEMENTOS
    printf("Muestreando el tope...");
    u=tope(pila);
    imprime(u);
    printf("\nNodos reservados ya sin encabezado %ld\n",dameCuentaNodos());
    printf("Sacando de pila...\n");
    while(!estaVacia(pila)){
        v=saca(&pila);
        imprime(&v);
        printf("\n");
    }
    v=saca(&pila);
    printf("Nodos reservados ya sin encabezado %ld\n",dameCuentaNodos());
    return 0;
}

void imprime(TipoElemento* x){
    printf("Clave=%d, Nombre=%s",x->clave,x->nombre);
}

