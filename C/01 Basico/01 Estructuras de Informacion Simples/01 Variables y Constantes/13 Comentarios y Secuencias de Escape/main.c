#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,anio;
    dia=12;
    anio=1979;
    //Esto es un comentario de l�nea completa
    printf("Codigo\tNombre\t\tApellido\n");  //comentario en l�nea
    printf("2233517\tLuis\t\tMu�oz\n");
    printf("2233517\tLuis\t\tMu\xA4oz\n");
    printf("%d\tSeptiembre\t%d\n",dia,anio);
    printf("slash \\ \n");
    printf("porciento %% \n");
    /*comentario
      multil�nea*/
    printf("comillas \"hola\" \n");
    return 0;
}
