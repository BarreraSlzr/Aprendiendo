#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void bubbleSort(RegistroOrdenable registros[],int n);

void ordenar(RegistroOrdenable registros[],int n){
    bubbleSort(registros,n);
}

void bubbleSort(RegistroOrdenable registros[],int n){
    int i,j;
    printf("BUBBLE SORT ordenando registros...\n");
    for(i=0;i<n-1;i++){
        for(j=n-1;j>=i+1;j--){
            printf("cuando i=%d,j=%d\n",i,j);
            if (registros[j].clave<registros[j-1].clave){
                intercambia(&(registros[j]),&(registros[j-1]));
            }
            listar(registros,n);
        }
    }
    printf("Terminado.\n");
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
