#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <iostream>
#include <time.h>
using namespace std;

//para preguntar por Unix se usa __unix__
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

#define CARACTERES_POR_FILA 80

void liberaScan(){
    time_t tiempoInicio=time(NULL),tiempoFin;
    char c=cin.get();
    tiempoFin=time(NULL);
    if (difftime(tiempoFin,tiempoInicio)<1){
        if (c!='\n'){
            do{
                c=cin.get();
            }while (c!='\n' && c!=cin.eof());
        }
        cin.get();
    }
}

void pausa(string texto){
    cout << texto;
    liberaScan();
}

void pausar(){
    pausa("Presione entrar para continuar . . .");
}

void pausarTerminar(){
    pausa("Presione entrar para terminar . . .");
}

void imprimirCentrado(string texto,string relleno){
    int longitudTexto=texto.length();
    int espacios=(CARACTERES_POR_FILA-longitudTexto)/2;
    int i;
    for(i=0;i<espacios;i++){
        cout << relleno;
    }
    cout << texto;
    i+=longitudTexto;
    for(;i<CARACTERES_POR_FILA;i++){
        cout << relleno;
    }
}

#endif // UTIL_H_INCLUDED
