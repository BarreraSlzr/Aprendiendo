#include <stdio.h>
#include <stdlib.h>

#define INGENIERIA_EN_COMPUTACION 1
#define INGENIERIA_INFORMATICA 2
#define INGENIERIA_BIOMEDICA 3
#define INGENIERIA_EN_COMUNICACIONES_Y_ELECTRONICA 4

int main()
{
    int carrera;
    printf("Elige una de las siguientes opciones:\n");
    printf("1. Ingenieria en Computacion\n");
    printf("2. Ingenieria Informatica\n");
    printf("3. Ingenieria Biomedica\n");
    printf("4. Ingenieria en Comunicaciones y Electronica\n");
    printf("Dime tu carrera: ");
    scanf("%d",&carrera);
    printf("\nTus materias a cursar en primer semestre son:\n");
    switch(carrera){
    case INGENIERIA_EN_COMPUTACION:
        printf("Fundamentos Filosoficos de la Computacion\n");
    case INGENIERIA_INFORMATICA:
        printf("Matematica Discreta\n");
    case INGENIERIA_BIOMEDICA:
    case INGENIERIA_EN_COMUNICACIONES_Y_ELECTRONICA:
        //materias basicas de tronco comun
        printf("Programacion\n");
        printf("Seminario de Solucion de Problemas de Programacion\n");
        printf("Metodos Matematicos I\n");
        switch(carrera){
            case INGENIERIA_INFORMATICA:
                printf("Administracion de Redes\n");
                break;
            case INGENIERIA_BIOMEDICA:
                printf("Anatomia Mecanica\n");
                printf("Seminario de Solucion de Problemas de Anatomia Mecanica\n");
                printf("Instrumentacion e Instalacion Hospitalaria\n");
                break;
            case INGENIERIA_EN_COMUNICACIONES_Y_ELECTRONICA:
                printf("Automatizacion\n");
                printf("Seminario de Solucion de Problemas de Automatizacion\n");
                printf("Sistemas de Medicion\n");
                break;
            default:
                ;
        }
        break;
    default:
        printf("Carrera no conocida\n");
    }
    return 0;
}
