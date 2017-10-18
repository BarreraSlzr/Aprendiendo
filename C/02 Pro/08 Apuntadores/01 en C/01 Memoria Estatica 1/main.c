#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROFESORES 2
#define TAMANO_NOMBRE 25

typedef struct Profesor{
    int codigo;
    char nombre[TAMANO_NOMBRE+1];
}Profe;

int main()
{
    Profe luis;
    Profe listaProfesores[MAX_PROFESORES];
    int cantidad,i;
    luis.codigo=2233517;
    printf("Tiempo estatico - Registros predefinidos\n");
    strcpy(luis.nombre,"Luis Alberto");
    printf("imprimiendo variable luis\n");
    printf("codigo: %d\n",luis.codigo);
    printf("nombre: %s\n",luis.nombre);

    printf("\nCuantos profesores voy a capturar (maximo %d)?",MAX_PROFESORES);
    scanf("%d",&cantidad);
    for(i=0;i<cantidad;i++){
        printf("dame codigo del %do.: ",i+1);
        scanf("%d",&(listaProfesores[i].codigo));
        printf("dame nombre del %do.: ",i+1);
        scanf("%s",(listaProfesores[i].nombre));
    }

    printf("\nImprimiendo registros\n");
    for(i=0;i<cantidad;i++){
        printf("codigo del %do. es %d\n",i+1,listaProfesores[i].codigo);
        printf("nombre del %do. es %s\n",i+1,listaProfesores[i].nombre);
    }
    return 0;
}
