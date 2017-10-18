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
    Profe** listaProfesores;
    int cantidad,i;

    printf("Cuantos profesores voy a tener?");
    scanf("%d",&cantidad);
    listaProfesores=(Profe**)malloc(cantidad*sizeof(Profe*));
    for(i=0;i<cantidad;i++){
        listaProfesores[i]=(Profe*)malloc(sizeof(Profe));
        printf("dame codigo del %do.: ",i+1);
        scanf("%d",&(listaProfesores[i]->codigo));
        printf("dame nombre del %do.: ",i+1);
        getchar();
        gets(listaProfesores[i]->nombre);
    }

    printf("\nImprimiendo registros...\n");
    for(i=0;i<cantidad;i++){
        printf("codigo del %do. es %d\n",i+1,listaProfesores[i]->codigo);
        printf("nombre del %do. es %s\n",i+1,listaProfesores[i]->nombre);
    }

    printf("\nBorrando registros...\n");
    for(i=0;i<cantidad;i++){
        free(listaProfesores[i]);
    }
    free(listaProfesores);
    return 0;
}
