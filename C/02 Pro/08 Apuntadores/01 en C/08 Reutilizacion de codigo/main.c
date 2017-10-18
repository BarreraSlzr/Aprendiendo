#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

#define TAMANO_NOMBRE 25

typedef struct Profesor{
    int codigo;
    char nombre[TAMANO_NOMBRE+1];
}Profe;

//void imprimirProfesores(Profe** listaProfesores,int cantidad);
void imprimirProfesores(Profe* listaProfesores[],int cantidad);
void capturaProfesor(Profe* p, int numProfesor);

int main()
{
    Profe** listaProfesores;
    //Profe* listaProfesores[];//esto no se puede
    Profe** listaTemp;
    int cantidad,i;

    printf("cuantos profesores voy a tener?");
    scanf("%d",&cantidad);
    listaProfesores=(Profe**)malloc(cantidad*sizeof(Profe*));
    for(i=0;i<cantidad;i++){
        listaProfesores[i]=(Profe*)malloc(sizeof(Profe));
        capturaProfesor(listaProfesores[i],i+1);
    }

    imprimirProfesores(listaProfesores,cantidad);

    printf("\nAgrandando el listado...\n");
    listaTemp=(Profe**)malloc((cantidad+1)*sizeof(Profe*));
    for(i=0;i<cantidad;i++){
        listaTemp[i]=listaProfesores[i];
    }
    free(listaProfesores);
    listaProfesores=listaTemp;
    listaProfesores[i]=(Profe*)malloc(sizeof(Profe));
    cantidad++;
    capturaProfesor(listaProfesores[i],i+1);

    imprimirProfesores(listaProfesores,cantidad);
    //imprimirProfesores(listaTemp,cantidad);

    printf("\nBorrando registros...\n");
    for(i=0;i<cantidad;i++){
        free(listaProfesores[i]);
    }
    free(listaProfesores);
    pausarTerminar();
    return 0;
}

//void imprimirProfesores(Profe** listaProfesores,int cantidad){
void imprimirProfesores(Profe* listaProfesores[],int cantidad){
    int i;
    printf("\nImprimiendo registros...\n");
    for(i=0;i<cantidad;i++){
        printf("codigo del %do. es %d\n",i+1,listaProfesores[i]->codigo);
        printf("nombre del %do. es %s\n",i+1,listaProfesores[i]->nombre);
    }
}

void capturaProfesor(Profe* p, int numProfesor){
    printf("dame codigo del %do.: ",numProfesor);
    scanf("%d",&(p->codigo));
    printf("dame nombre del %do.: ",numProfesor);
    liberaScan();
    //getchar();
    gets(p->nombre);
}

