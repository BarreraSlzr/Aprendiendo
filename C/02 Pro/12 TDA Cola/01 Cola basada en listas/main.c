#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Colas.h"

int main()
{
    Cola cola;
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

    printf("Inicializando cola...\n");
    inicializa(&cola);
    printf("Poniendo en cola...\n");
    encola(&x,&cola);
    encola(&y,&cola);
    encola(&z,&cola);
    encola(&v,&cola);
    printf("Muestreando el frente...");
    u=frente(&cola);
    imprimeElemento(u);
    printf("\nQuitando de cola...\n");
    while(!estaVacia(&cola)){
        v=desencola(&cola);
        imprimeElemento(&v);
        printf("\n");
    }
    v=desencola(&cola);
    return 0;
}

void imprimeElemento(TipoElemento* x){
    printf("Clave=%d, Nombre=%s",x->clave,x->nombre);
}

booleano mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}
