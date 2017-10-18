#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <time.h>

#define CARACTERES_POR_FILA 80

void liberaScan(){
    time_t tiempoInicio=time(NULL),tiempoFin;
    char c=getchar();
    tiempoFin=time(NULL);
    if (difftime(tiempoFin,tiempoInicio)<1){
        if (c!='\n'){
            do{
                c=getchar();
            }while (c!='\n' && c!=EOF);
        }
        getchar();
    }
}

void pausa(char* texto){
    printf("%s",texto);
    liberaScan();
}

void pausar(){
    pausa("Presione entrar para continuar . . .");
}

void pausarTerminar(){
    pausa("Presione entrar para terminar . . .");
}

void imprimirCentrado(char* texto,char* relleno){
    int longitudTexto=strlen(texto);
    int espacios=(CARACTERES_POR_FILA-longitudTexto)/2;
    int i;
    for(i=0;i<espacios;i++){
        printf("%s",relleno);
    }
    printf("%s",texto);
    i+=longitudTexto;
    for(;i<CARACTERES_POR_FILA;i++){
        printf("%s",relleno);
    }
}

#endif // UTIL_H_INCLUDED
