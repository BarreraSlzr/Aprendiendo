#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 7

int main()
{
    int practicas[TOTAL_PRACTICAS],posicion;
    int numPractica,calificacion;
    printf("Dame el numero de practica (1 a %d): ",TOTAL_PRACTICAS);
    scanf("%d",&numPractica);
    printf("Dame la calificacion a almacenar: ");
    scanf("%d",&calificacion);
    if (1<=numPractica && numPractica<=TOTAL_PRACTICAS){
        practicas[posicion=numPractica-1]=calificacion;
        printf("practica %d = %d\n",numPractica,practicas[posicion]);
    }
    else{
        printf("numero de practica no es valido\n");
    }
    return 0;
}
