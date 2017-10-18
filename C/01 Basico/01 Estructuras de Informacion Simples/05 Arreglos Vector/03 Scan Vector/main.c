#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 3

int main()
{
    int practicas[TOTAL_PRACTICAS];
    int calificacion;
    printf("Dame la calificacion de la practica 1: ");
    scanf("%d",&calificacion);
    practicas[0]=calificacion;
    printf("Dame la calificacion de la practica 2: ");
    scanf("%d",&calificacion);
    practicas[1]=calificacion;
    printf("Dame la calificacion de la practica 3: ");
    scanf("%d",&calificacion);
    practicas[2]=calificacion;
    printf("practica 1 = %d\n",practicas[0]);
    printf("practica 2 = %d\n",practicas[1]);
    printf("practica 3 = %d\n",practicas[2]);
    return 0;
}
