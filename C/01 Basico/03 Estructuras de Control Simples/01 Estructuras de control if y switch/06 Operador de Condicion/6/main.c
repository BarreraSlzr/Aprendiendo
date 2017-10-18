#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* tipoCalificacion;
    int calificacion;
    printf("Dime cual calificacion? ");
    scanf("%d",&calificacion);
    tipoCalificacion=calificacion>=95?"Excelente":"OK";
    printf("Tu calificacion es %s",tipoCalificacion);
    return 0;
}
