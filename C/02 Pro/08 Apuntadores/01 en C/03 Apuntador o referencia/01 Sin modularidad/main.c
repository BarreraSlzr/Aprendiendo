#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

#define TAMANO_NOMBRE 25

typedef struct Profesor{
    int codigo;
    char nombre[TAMANO_NOMBRE+1];
}Profe;

int main()
{
    Profe luis,munoz;
    Profe* alberto;

    munoz.codigo=123;
    strcpy(munoz.nombre,"Munoz");

    luis.codigo=2233517;
    strcpy(luis.nombre,"Luis Alberto");
    printf("Apuntadores\n\n");
    printf("Imprimiendo a luis\n");
    printf("codigo %d\n",luis.codigo);
    printf("nombre %s\n",luis.nombre);

    alberto=&luis;
    printf("\nImprimiendo a alberto\n");
    printf("codigo %d\n",alberto->codigo);
    printf("nombre %s\n",alberto->nombre);
    pausar();

    printf("\ncambiando algo de luis\n");
    luis.codigo=1234;
    printf("Imprimiendo a luis\n");
    printf("codigo %d\n",luis.codigo);
    printf("nombre %s\n",luis.nombre);
    printf("\nImprimiendo a alberto\n");
    printf("codigo %d\n",alberto->codigo);
    printf("nombre %s\n",alberto->nombre);
    pausar();

    alberto->codigo=789;
    printf("\n***************\nImprimiendo a luis\n");
    printf("codigo %d\n",luis.codigo);
    printf("nombre %s\n",luis.nombre);
    printf("\nImprimiendo a alberto\n");
    printf("codigo %d\n",alberto->codigo);
    printf("nombre %s\n",alberto->nombre);
    pausar();

    *alberto=munoz;
    printf("\n***************\nImprimiendo a luis\n");
    printf("codigo %d\n",luis.codigo);
    printf("nombre %s\n",luis.nombre);
    printf("\nImprimiendo a alberto\n");
    printf("codigo %d\n",alberto->codigo);
    printf("nombre %s\n",alberto->nombre);
    return 0;
}
