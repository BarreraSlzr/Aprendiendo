#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(char* cadena){
    printf("%s",cadena);
}

void imprimeln(char* cadena){
    printf("%s\n",cadena);
}

void comparaIgualdadCadenas(char* cadena1,char* cadena2){
    imprime(cadena1);
    imprime(" y ");
    imprime(cadena2);
    if (strcmp(cadena1,cadena2)==0){
        imprimeln(" son iguales");
    }
    else{
        imprimeln(" son diferentes");
    }
}

void dimeCualCadenaVaPrimero(char* cadena1,char* cadena2){
    if (strcmp(cadena1,cadena2)==0){
        printf("0) las cadenas %s y %s son iguales",cadena1,cadena2);
    }
    else if (strcmp(cadena1,cadena2)<0){
        printf("1) %s va antes que %s",cadena1,cadena2);
    }
    else{
        printf("2) %s va antes que %s",cadena2,cadena1);
    }
    imprimeln("");
}

int main()
{
    char* cadena1="Luis";
    char* cadena2="Alberto";
    char* cadena3="LUIS";
    char* cadena4="Luis";
    char letra1='L';
    char letra2='A';
    int diferencia;
    imprimeln("EJEMPLO strcmp");
    comparaIgualdadCadenas(cadena1,cadena2);
    comparaIgualdadCadenas(cadena1,cadena3);
    comparaIgualdadCadenas(cadena1,cadena4);
    dimeCualCadenaVaPrimero(cadena1,cadena2);
    diferencia=letra1-letra2;
    printf("La diferencia es %d",diferencia);
    return 0;
}
