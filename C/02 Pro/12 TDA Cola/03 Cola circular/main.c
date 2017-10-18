#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Colas.h"
#include "util.h"

void imprime(TipoElemento* x);

int main()
{
    const int TOTAL_A_ENCOLAR=10;
    const int PRIMERO_EN_ENCOLAR=5;
    Cola cola;
    Persona x,y,z,v;
    Persona* u;
    char nombre[TAMANO_NOMBRE];
    int i,j;

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

    printf("Poniendo 4 elementos en cola...\n");
    encola(&x,&cola);
    encola(&y,&cola);
    encola(&z,&cola);
    encola(&v,&cola);

    for(i=PRIMERO_EN_ENCOLAR,j=TOTAL_A_ENCOLAR;i<=j;i++){
        if (estaLlena(&cola)){
            pausar();
            printf("\nQuitando uno de cola...");
            v=desencola(&cola);
            imprime(&v);
            printf("\n");
        }
        pausar();
        x.clave=i;
        strcpy(x.nombre,"El ");
        strcat(x.nombre,itoa(i, nombre, 10));
        strcat(x.nombre,"o.");
        printf("Poniendo <<");
        imprime(&x);
        printf(">> en cola...\n");
        encola(&x,&cola);
    }
    pausar();
    printf("Muestreando el frente...");
    u=frente(&cola);
    imprime(u);
    printf("\nQuitando todos de cola...\n");
    while(!estaVacia(&cola)){
        v=desencola(&cola);
        imprime(&v);
        printf("\n");
    }
    v=desencola(&cola);
    return 0;
}

void imprime(TipoElemento* x){
    printf("Clave=%d, Nombre=%s",x->clave,x->nombre);
}

