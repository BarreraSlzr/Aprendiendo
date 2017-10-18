#include <stdio.h>
#include <stdlib.h>

typedef enum {LUNES=1,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO} diaDeLaSemana;

int main()
{
    int dia;
    printf("Elige el dia de la semana (1 a 7) que llegaras: ");
    scanf("%d",&dia);
    printf("\nLo que te toca ver es:\n");
    switch(dia){
    case LUNES:
        printf("Procesion por la calle principal\n");
    case MARTES:
        printf("Recibir a los hijos que se fueron\n");
    case MIERCOLES:
        printf("Subir al cerro de la cruz y rezar\n");
    case JUEVES:
        printf("Desfile de expulsion de los demonios\n");
    case VIERNES:
        printf("Ir a la barranca a romper cantaros\n");
    case SABADO:
        printf("Desfile de mojigangas\n");
    case DOMINGO:
        printf("Lanzamiento de globos\n");
        break;//que pasa si descomentas esta linea?
    default:
        printf("Dia no conocido\n");
    }
    printf("\nLuego, Regresa a casa\n");
    return 0;
}
