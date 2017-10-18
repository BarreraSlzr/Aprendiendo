#ifndef REGISTRO_ORDENABLE_H_INCLUDED
#define REGISTRO_ORDENABLE_H_INCLUDED
#include "Tipos_y_Constantes.h"
#include "util.h"

void intercambia(tipo_dato* x, tipo_dato* y);
void listar(tipo_dato elementos[],int n);
void ordenar(tipo_dato elementos[],int n);
void imprimir(tipo_dato x);

void intercambia(tipo_dato* x, tipo_dato* y){
    tipo_dato temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void listar(tipo_dato elementos[],int n){
    int i;
    printf("listando elementos:\n");
    for(i=0;i<n;i++){
        imprimir(elementos[i]);
        printf("\n");
    }
    pausar();
}

#endif // REGISTRO_ORDENABLE_H_INCLUDED
