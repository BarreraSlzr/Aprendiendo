#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void insertSort(tipo_dato elementos[],int n);

void ordenar(tipo_dato elementos[],int n){
    insertSort(elementos,n);
}

void insertSort(tipo_dato elementos[],int n){
    int i,j;
    printf("INSERT SORT ordenando elementos...\n");
    for(i=1;i<n;i++){
        j=i;
        while(j>0 && elementos[j]<elementos[j-1]){
            //printf("cuando i=%d,j=%d\n",i,j);
            intercambia(&(elementos[j]),&(elementos[j-1]));
            //listar(elementos,n);
            j--;
        }
    }
    printf("Terminado.\n");
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
