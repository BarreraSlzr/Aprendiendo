#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

#define TAMANO_NOMBRE 25

typedef struct Profesor{
    int codigo;
    char nombre[TAMANO_NOMBRE+1];
}Profe;

void imprimeProfes(Profe luis,Profe* alberto){
    printf("Imprimiendo a luis\n");
    printf("codigo %d\n",luis.codigo);
    printf("nombre %s\n",luis.nombre);
    printf("\nImprimiendo a alberto\n");
    printf("codigo %d\n",alberto->codigo);
    printf("nombre %s\n",alberto->nombre);
    printf("********************\n");
}

int main()
{
    Profe luis,munoz;
    Profe* alberto;

    munoz.codigo=123;
    strcpy(munoz.nombre,"Munoz");

    luis.codigo=2233517;
    strcpy(luis.nombre,"Luis Alberto");
    printf("Apuntadores\n\n");

    alberto=&luis;

    imprimeProfes(luis,alberto);
    pausar();

    printf("\ncambiando algo de luis\n");
    luis.codigo=1234;
    imprimeProfes(luis,alberto);
    pausar();

    alberto->codigo=789;
    imprimeProfes(luis,alberto);
    pausar();

    *alberto=munoz;
    imprimeProfes(luis,alberto);
    return 0;
}
