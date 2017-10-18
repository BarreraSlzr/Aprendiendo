#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CADENA 20

void imprimeln(char* cadena){
    printf("%s\n",cadena);
}

int main()
{
    char cadenaDestino[MAX_CADENA];
    char* cadena1="Hola ";
    char* cadena2="Mundo C";

    //concatenando cadenas en una
    imprimeln("EJEMPLO strcat");
    cadenaDestino[0]='\0';
    imprimeln("cadena vacia");
    imprimeln(cadenaDestino);
    imprimeln("primera concatenacion...");
    strcat(cadenaDestino,cadena1);
    imprimeln(cadenaDestino);
    imprimeln("segunda concatenacion...");
    strcat(cadenaDestino,cadena2);
    imprimeln(cadenaDestino);

    return 0;
}

