#ifndef CUENTA_TIEMPO_H_INCLUDED
#define CUENTA_TIEMPO_H_INCLUDED

#include <time.h>

time_t tiempoInicio,tiempoFin;

void iniciarCuentaTiempo(){
    tiempoInicio=time(NULL);
}

void terminarCuentaTiempo(){
    tiempoFin=time(NULL);
}

void imprimirCuentaTiempo(){
    double tiempo;
    tiempo=difftime(tiempoFin,tiempoInicio);
    printf("Tiempo transcurrido: %f segundos.\n",tiempo);
}

#endif // CUENTA_TIEMPO_H_INCLUDED
