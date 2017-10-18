#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,anio;
    dia=12;
    anio=1979;
    //Esto es un comentario de línea completa
    printf("Codigo\tNombre\t\tApellido\n");  //comentario en línea
    printf("2233517\tLuis\t\tMuñoz\n");
    printf("2233517\tLuis\t\tMu\xA4oz\n");
    printf("%d\tSeptiembre\t%d\n",dia,anio);
    printf("slash \\ \n");
    printf("porciento %% \n");
    /*comentario
      multilínea*/
    printf("comillas \"hola\" \n");
    return 0;
}
