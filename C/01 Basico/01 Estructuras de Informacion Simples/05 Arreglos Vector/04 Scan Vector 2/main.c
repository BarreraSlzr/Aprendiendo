#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 3

int main()
{
    int practicas[TOTAL_PRACTICAS];
    int posicion,calificacion;
    printf("Dame la posicion (0 a %d) donde almacenar la calificacion: ",TOTAL_PRACTICAS-1);
    scanf("%d",&posicion);
    printf("Dame la calificacion a almacenar: ");
    scanf("%d",&calificacion);
    practicas[posicion]=calificacion;
    printf("practica 1 = %d\n",practicas[0]);
    printf("practica 2 = %d\n",practicas[1]);
    printf("practica 3 = %d\n",practicas[2]);
    return 0;
}
