#include <stdio.h>
#include <stdlib.h>

#define MIN_EXCELENCIA 95
#define MIN_CALIFICACION 60

int main()
{   //analogo al if-else if-else
    int calificacion;
    calificacion=95;
    printf("Calificacion\n");
    (calificacion>=MIN_EXCELENCIA)?printf("aprobatoria excelente"):
        (calificacion>=MIN_CALIFICACION)?printf("aprobatoria"):
            printf("no aprobatoria");
    printf("\n");
    return 0;
}
