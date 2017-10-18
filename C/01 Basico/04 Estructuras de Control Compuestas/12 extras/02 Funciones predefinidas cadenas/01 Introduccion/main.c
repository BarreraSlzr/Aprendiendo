#include <stdio.h>
#include <stdlib.h>

void imprime(char* cadena){
    printf("%s",cadena);
}

void imprimeln(char* cadena){
    printf("%s\n",cadena);
}

//y que tal si...(realmente conviene esta modularidad?)
/*void imprimeln(char* cadena){
    imprime(cadena);
    imprime("\n");
}*/

void imprimeChars(char* cadena){
    int i;
    for(i=0;cadena[i]!='\0';i++){
        printf("%c",cadena[i]);
    }
}

int main()
{
    char* cadena1="Hola ";
    char* cadena2="Mundo C";

    /*impresion de cadenas descargando de sintaxis al programa fuente
      y cargando al programa objeto (como lo que hace cout en C++)*/
    imprime(cadena1);
    imprime(cadena2);
    imprime("\n");

    imprimeln(cadena1);
    imprimeln(cadena2);

    imprimeln("imprimiendo caracteres...");
    imprimeChars(cadena1);
    imprimeln("");//cadena vacia

    return 0;
}
