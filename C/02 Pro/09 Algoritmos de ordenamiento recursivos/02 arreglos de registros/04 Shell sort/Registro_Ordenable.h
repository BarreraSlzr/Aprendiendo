#ifndef REGISTRO_ORDENABLE_H_INCLUDED
#define REGISTRO_ORDENABLE_H_INCLUDED
#include "Tipos_y_Constantes.h"
#include "util.h"

void intercambia(RegistroOrdenable* x, RegistroOrdenable* y);
void listar(RegistroOrdenable registros[],int n);
void ordenar(RegistroOrdenable registros[],int n);
void imprimir(RegistroOrdenable x);

void intercambia(RegistroOrdenable* x, RegistroOrdenable* y){
    RegistroOrdenable temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void listar(RegistroOrdenable registros[],int n){
    int i;
    printf("listando registros:\n");
    for(i=0;i<n;i++){
        imprimir(registros[i]);
        printf("\n");
    }
    pausar();
}

#endif // REGISTRO_ORDENABLE_H_INCLUDED
