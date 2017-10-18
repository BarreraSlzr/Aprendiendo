#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* tipoCalificacion;
    int calificacion;
    //entrada de datos
    printf("Dime cual calificacion? ");
    scanf("%d",&calificacion);
    //computaciones
    if (calificacion>=95){
        tipoCalificacion="Excelente";
    }
    else{
        tipoCalificacion="OK";
    }
    //salida de datos
    printf("Tu calificacion es %s",tipoCalificacion);
    return 0;
}
