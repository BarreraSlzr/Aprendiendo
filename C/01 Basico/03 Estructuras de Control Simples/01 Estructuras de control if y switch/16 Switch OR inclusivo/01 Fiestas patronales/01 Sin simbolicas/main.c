#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Elige el dia de la semana (1 a 7) que llegaras: ");
    scanf("%d",&dia);
    printf("\nLo que te toca ver es:\n");
    switch(dia){
    case 1:
        printf("Procesion por la calle principal\n");
    case 2:
        printf("Recibir a los hijos que se fueron\n");
    case 3:
        printf("Subir al cerro de la cruz y rezar\n");
    case 4:
        printf("Desfile de expulsion de los demonios\n");
    case 5:
        printf("Ir a la barranca a romper cantaros\n");
    case 6:
        printf("Desfile de mojigangas\n");
    case 7:
        printf("Lanzamiento de globos\n");
        break;//que pasa si descomentas esta linea?
    default:
        printf("Dia no conocido\n");
    }
    printf("\nLuego, Regresa a casa\n");
    return 0;
}
