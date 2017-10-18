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
    int i;

    //concatenando cadenas en una
    imprimeln("EJEMPLO strcat");
    cadenaDestino[0]='\0';
    imprimeln("cadena vacia");
    imprimeln(cadenaDestino);
    for(i=1;i<100000;i++){
        printf("%da concatenacion...\n",i++);
        strcat(cadenaDestino,cadena1);
        imprimeln(cadenaDestino);
        printf("%da concatenacion...\n",i);
        strcat(cadenaDestino,cadena2);
        imprimeln(cadenaDestino);
    }

    return 0;
}

