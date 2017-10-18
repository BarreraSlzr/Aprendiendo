#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 3

int main()
{
    int practicas[TOTAL_PRACTICAS];
    int numPractica,calificacion;
    printf("Dame el numero de practica (1 a %d): ",TOTAL_PRACTICAS);
    scanf("%d",&numPractica);
    printf("Dame la calificacion a almacenar: ");
    scanf("%d",&calificacion);
    practicas[numPractica-1]=calificacion;
    printf("practica 1 = %d\n",practicas[0]);
    printf("practica 2 = %d\n",practicas[1]);
    printf("practica 3 = %d\n",practicas[2]);
    return 0;
}
