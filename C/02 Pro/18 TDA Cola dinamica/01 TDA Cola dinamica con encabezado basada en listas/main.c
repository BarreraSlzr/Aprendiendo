#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Colas.h"

int main()
{
    Cola cola;
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

    printf("Inicializando cola...\n");
    inicializa(&cola);
    printf("Poniendo en cola...\n");
    poneEnCola(&x,cola);
    poneEnCola(&y,cola);
    poneEnCola(&z,cola);
    poneEnCola(&v,cola);  //ahora si puede encolar el cuarto elemento
    printf("Muestreando el frente...");
    u=frente(cola);
    imprimeElemento(u);
    printf("\nNodos reservados incluyendo encabezado %ld\n",dameCuentaNodos());
    printf("Quitando de cola...\n");
    while(!estaVacia(cola)){
        v=quitaDeCola(cola);
        imprimeElemento(&v);
        printf("\n");
    }
    v=quitaDeCola(cola);
    printf("Nodos reservados incluyendo encabezado %ld\n",dameCuentaNodos());
    liberaNodo(cola);
    printf("Nodos reservados habiendo liberado encabezado %ld\n",dameCuentaNodos());
    return 0;
}

void imprimeElemento(TipoElemento* x){
    printf("Clave=%d, Nombre=%s",x->clave,x->nombre);
}

booleano mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}
