#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_NOMBRES 2
#define MAX_LONGITUD_NOMBRE 20

int main()
{
    char nombresHard[TOTAL_NOMBRES][MAX_LONGITUD_NOMBRE+1]={
        {'L','u','i','s','\0'},
        {'A','l','b','e','r','t','o','\0'}
    };
    char nombresCopiar[TOTAL_NOMBRES][MAX_LONGITUD_NOMBRE+1];
    char nombresScan[TOTAL_NOMBRES][MAX_LONGITUD_NOMBRE+1];
    int i;
    printf("Nombres hardcodeados:\n");
    for(i=0;i<TOTAL_NOMBRES;i++){
        printf("%s\n",nombresHard[i]);
    }
    strcpy(nombresCopiar[0],"Luis Muñoz");
    strcpy(nombresCopiar[1],"Alberto Muñoz");
    printf("Nombres copiados:\n");
    for(i=0;i<TOTAL_NOMBRES;i++){
        printf("%s\n",nombresCopiar[i]);
    }
    printf("Nombres escaneados:\n");
    for(i=0;i<TOTAL_NOMBRES;i++){
        printf("Dame el nombre %d: ",i+1);
        scanf("%s",nombresScan[i]);//no acepta espacios
        //gets(nombresScan[i]);//si acepta espacios
    }
    for(i=0;i<TOTAL_NOMBRES;i++){
        printf("%s\n",nombresScan[i]);
    }
    return 0;
}
