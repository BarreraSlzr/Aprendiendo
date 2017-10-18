#include <stdio.h>
#include <stdlib.h>

#define MIN_CALIFICACION 60

int main()
{
    int calificacion;
    calificacion=95;//valor hardcodeado
    printf("Calificacion\n");
    (calificacion>=MIN_CALIFICACION)?printf("aprobatoria"):printf("no aprobatoria");
    printf("\n");
    return 0;
}
