#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACIDAD_CADENA 18
//#define CAPACIDAD_CADENA 20

void imprimeln(char* cadena){
    printf("%s\n",cadena);
}

int main()
{

    char cadenaDestino[CAPACIDAD_CADENA+1];
    char* cadena1="Hola";
    //char* cadena1="Mundo";
    int i,lenCad=strlen(cadena1);

    //concatenando cadenas en una
    imprimeln("EJEMPLO strcat");
    cadenaDestino[0]='\0';
    for(i=0;i<10;i++){
        printf("al inicio cadenaDestino=");
        imprimeln(cadenaDestino);
        if (strlen(cadenaDestino)+lenCad<=CAPACIDAD_CADENA){
            strcat(cadenaDestino,cadena1);
            printf("despues cadenaDestino=");
            imprimeln(cadenaDestino);
        }
        else{
            imprimeln("ya no cupo");
        }
    }
    return 0;
}

