#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFER 20

void imprimeln(char* cadena){
    printf("%s\n",cadena);
}

int main()
{
    char* cadena1="Luis";
    char* cadena2="Alberto";
    char bufer[MAX_BUFER];
    imprimeln("EJEMPLO strcpy");
    bufer[0]='\0';
    imprimeln("bufer \"vacio\"");
    imprimeln(bufer);
    imprimeln("bufer sobreescrito");
    strcpy(bufer,cadena1);
    imprimeln(bufer);
    imprimeln("bufer sobreescrito otra vez");
    strcpy(bufer,cadena2);
    imprimeln(bufer);
    imprimeln("bufer sobreescrito otra vez mas");
    strcpy(bufer,cadena1);
    imprimeln(bufer);
    printf("%c",bufer[6]);

    return 0;
}
