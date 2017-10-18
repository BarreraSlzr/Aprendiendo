#ifndef CUENTA_TIEMPO_H_INCLUDED
#define CUENTA_TIEMPO_H_INCLUDED

#include <time.h>

time_t tiempoInicio,tiempoFin;

void iniciarCuentaTiempo(){
    tiempoInicio=time(0);
}

void terminarCuentaTiempo(){
    tiempoFin=time(0);
}

void imprimirCuentaTiempo(){
    long tiempo;
    tiempo=tiempoFin-tiempoInicio;
    printf("Tiempo inicio=%ld\n",(long)tiempoInicio);
    printf("Tiempo fin=%ld\n",(long)tiempoFin);
    printf("Tiempo transcurrido: %ld segundos.\n",tiempo);
}

#endif // CUENTA_TIEMPO_H_INCLUDED
