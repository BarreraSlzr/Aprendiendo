#ifndef CUENTA_TIEMPO_H_INCLUDED
#define CUENTA_TIEMPO_H_INCLUDED

#include <sys/time.h>

struct timeval tiempoInicio,tiempoFin;

void iniciarCuentaTiempo(){
    gettimeofday(&tiempoInicio,NULL);
}

void terminarCuentaTiempo(){
    gettimeofday(&tiempoFin,NULL);
}

void imprimirCuentaTiempo(){
    long tiempo;
    tiempo=(tiempoFin.tv_sec*1000000+tiempoFin.tv_usec)-(tiempoInicio.tv_sec*1000000+tiempoInicio.tv_usec);
    printf("Tiempo transcurrido: %ld microsegundos.\n",tiempo);
}

#endif // CUENTA_TIEMPO_H_INCLUDED
