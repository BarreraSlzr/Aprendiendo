#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO_CADENA 50

int main()
{
    char cadenaSinEspacios[TAMANO_CADENA];
    //char* cadenaSinEspacios;//que pasa si la uso asi?
    char cadenaConEspacios[TAMANO_CADENA];
    char caracter;

    printf("Dame una cadena sin espacios: ");
    scanf("%s",cadenaSinEspacios);//no lleva & pues es un arreglo
    printf("La cadena leida es ***%s***\n\n",cadenaSinEspacios);
    getchar();
    printf("Presione entrar para continuar");
    getchar();

    printf("Dame una cadena con espacios: ");
    gets(cadenaConEspacios);
    //gets no necesita getchar() posterior como el scanf
    printf("La segunda cadena leida es %s\n\n",cadenaConEspacios);
    //puts(cadenaConEspacios);

    printf("Ambas cadenas son: %s-%s\n\n",cadenaSinEspacios,cadenaConEspacios);

    //getchar();//gets no deja el enter que scanf si deja en el bufer
    printf("Presione entrar para continuar");
    getchar();

    printf("Dame un caracter: ");
    caracter=getchar();
    printf("caracter *%c*\n",caracter);
    getchar();
    printf("Presione entrar para terminar");
    getchar();
    return 0;
}
