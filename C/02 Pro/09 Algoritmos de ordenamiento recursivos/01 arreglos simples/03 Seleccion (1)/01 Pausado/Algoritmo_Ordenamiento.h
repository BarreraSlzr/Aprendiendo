#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void selectionSort(tipo_dato elementos[],int n);

void ordenar(tipo_dato elementos[],int n){
    selectionSort(elementos,n);
}

void selectionSort(tipo_dato elementos[],int n){
    int i,j,indiceMenor;
    tipo_dato claveMenor;
    printf("SELECTION SORT ordenando elementos...\n");
    for(i=0;i<n-1;i++){
        printf("cuando i=%d\n",i);
        indiceMenor=i;
        claveMenor=elementos[i];
        for(j=i+1;j<n;j++){
            if (elementos[j]<claveMenor){
                claveMenor=elementos[j];
                indiceMenor=j;
            }
        }
        intercambia(&(elementos[i]),&(elementos[indiceMenor]));
        listar(elementos,n);
    }
    printf("Terminado.\n");
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
