#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int anio;
    int mes;
    int dia;
}Fecha;

int main()
{
    Fecha nacimientoLuis;

    nacimientoLuis.anio=1979;
    nacimientoLuis.mes=9;
    nacimientoLuis.dia=12;

    printf("Fecha nacimiento de Luis es %4d/%02d/%02d\n",nacimientoLuis.anio,
           nacimientoLuis.mes,nacimientoLuis.dia);
    return 0;
}
