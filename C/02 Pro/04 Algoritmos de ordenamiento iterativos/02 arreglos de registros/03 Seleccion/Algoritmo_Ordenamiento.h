#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void selectionSort(RegistroOrdenable registros[],int n);

void ordenar(RegistroOrdenable registros[],int n){
    selectionSort(registros,n);
}

void selectionSort(RegistroOrdenable registros[],int n){
    int i,j,indiceMenor;
    tipo_clave claveMenor;
    printf("SELECTION SORT ordenando registros...\n");
    for(i=0;i<n-1;i++){
        printf("cuando i=%d\n",i);
        indiceMenor=i;
        claveMenor=registros[i].clave;
        for(j=i+1;j<n;j++){
            if (registros[j].clave<claveMenor){
                claveMenor=registros[j].clave;
                indiceMenor=j;
            }
        }
        intercambia(&(registros[i]),&(registros[indiceMenor]));
        listar(registros,n);
    }
    printf("Terminado.\n");
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
