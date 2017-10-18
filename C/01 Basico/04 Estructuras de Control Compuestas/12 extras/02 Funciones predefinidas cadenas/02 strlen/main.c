#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimeln(char* cadena){
    printf("%s\n",cadena);
}

int main()
{
    char* cadena1="Luis";//comentar esta
    //char* cadena1="Lui\0s";//y descomentar esta
    int len;
    imprimeln("EJEMPLO strlen");
    len=strlen(cadena1);
    printf("la longitud de la cadena %s es %d\n",cadena1,len);

    return 0;
}

