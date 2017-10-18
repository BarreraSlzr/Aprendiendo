#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO_NOMBRE 25

typedef struct Profesor{
    int codigo;
    char nombre[TAMANO_NOMBRE+1];
}Profe;

int main()
{
    int cantidad,i;
    printf("Tiempo estatico - arreglos cuestionables\n");

    printf("\nCuantos profesores voy a capturar?");
    scanf("%d",&cantidad);
    Profe listaProfesores[cantidad];//cuestionable, no puede rediseñarse como una variable global sin malloc
    for(i=0;i<cantidad;i++){
        printf("dame codigo del %do.: ",i+1);
        scanf("%d",&(listaProfesores[i].codigo));
        printf("dame nombre del %do.: ",i+1);
        scanf("%s",(listaProfesores[i].nombre));
    }

    printf("\nImprimiendo registros...\n");
    for(i=0;i<cantidad;i++){
        printf("codigo del %do. es %d\n",i+1,listaProfesores[i].codigo);
        printf("nombre del %do. es %s\n",i+1,listaProfesores[i].nombre);
    }
    return 0;
}
