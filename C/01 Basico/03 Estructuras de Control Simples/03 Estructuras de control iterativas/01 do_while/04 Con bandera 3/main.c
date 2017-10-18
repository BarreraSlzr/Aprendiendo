#include <stdio.h>
#include <stdlib.h>

#define MIN_CALIFICACION 60

int main()
{
    int calificacionNoAprobatoria;//bandera
    float calFinal;
    do{
        printf("Dame tu calificacion final: ");
        scanf("%f",&calFinal);
        calificacionNoAprobatoria=calFinal<MIN_CALIFICACION;
        if (calificacionNoAprobatoria){
            printf("Se le recomienda libros a leer.\n");
        }
    }
    while(calificacionNoAprobatoria);
    printf("Felicidades, aprobaste! =)\n");
    return 0;
}
