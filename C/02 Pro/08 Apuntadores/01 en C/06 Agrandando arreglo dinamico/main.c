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
    Profe* listaProfesores;
    Profe* temp;
    int cantidad,i;

    printf("Cuantos profesores voy a tener?");
    scanf("%d",&cantidad);
    listaProfesores=(Profe*)malloc(cantidad*sizeof(Profe));
    for(i=0;i<cantidad;i++){
        printf("Dame codigo del %do.: ",i+1);
        scanf("%d",&(listaProfesores[i].codigo));
        printf("Dame nombre del %do.: ",i+1);
        getchar();
        gets(listaProfesores[i].nombre);
    }

    printf("\nImprimiendo registros...\n");
    for(i=0;i<cantidad;i++){
        printf("codigo del %do. es %d\n",i+1,listaProfesores[i].codigo);
        printf("nombre del %do. es %s\n",i+1,listaProfesores[i].nombre);
    }
    printf("\nAgrandando el arreglo...\n");
    temp=(Profe*)malloc((cantidad+1)*sizeof(Profe));
    for(i=0;i<cantidad;i++){
        temp[i]=listaProfesores[i];
    }
    free(listaProfesores);
    listaProfesores=temp;
    printf("Dame codigo del %do.: ",cantidad+1);
    scanf("%d",&(listaProfesores[cantidad].codigo));
    printf("Dame nombre del %do.: ",cantidad+1);
    getchar();
    gets(listaProfesores[cantidad++].nombre);
    printf("\nImprimiendo registros...\n");
    for(i=0;i<cantidad;i++){
        printf("codigo del %do. es %d\n",i+1,listaProfesores[i].codigo);
        printf("nombre del %do. es %s\n",i+1,listaProfesores[i].nombre);
    }
    printf("borrando registros...\n");
    pausa("Presione entrar para terminar . . .");
    free(listaProfesores);
    listaProfesores=NULL;
    return 0;
}
