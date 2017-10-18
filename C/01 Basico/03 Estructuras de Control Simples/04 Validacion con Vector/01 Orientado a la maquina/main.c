#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 7

int main()
{
    int practicas[TOTAL_PRACTICAS];
    int posicion,calificacion,posicionMaxima=TOTAL_PRACTICAS-1;
    printf("Dame la posicion (0 a %d) donde almacenar la calificacion: ",posicionMaxima);
    scanf("%d",&posicion);
    printf("Dame la calificacion a almacenar: ");
    scanf("%d",&calificacion);
    if (0<=posicion && posicion<=posicionMaxima){
        practicas[posicion]=calificacion;
        printf("practicas en posicion %d = %d\n",posicion,practicas[posicion]);
    }
    else{
        printf("posicion no es valida\n");
    }
    return 0;
}
