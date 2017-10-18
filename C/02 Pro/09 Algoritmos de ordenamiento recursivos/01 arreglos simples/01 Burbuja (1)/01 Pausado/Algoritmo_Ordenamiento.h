#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void bubbleSort(tipo_dato elementos[],int n);

void ordenar(tipo_dato elementos[],int n){
    bubbleSort(elementos,n);
}

void bubbleSort(tipo_dato elementos[],int n){
    int i,j;
    printf("BUBBLE SORT ordenando elementos...\n");
    for(i=0;i<n-1;i++){
        for(j=n-1;j>=i+1;j--){
            printf("cuando i=%d,j=%d\n",i,j);
            if (elementos[j]<elementos[j-1]){
                intercambia(&(elementos[j]),&(elementos[j-1]));
            }
            listar(elementos,n);
        }
    }
    printf("Terminado.\n");
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
