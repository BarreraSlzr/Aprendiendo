#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void insertSort(RegistroOrdenable registros[],int n);

void ordenar(RegistroOrdenable registros[],int n){
    insertSort(registros,n);
}

void insertSort(RegistroOrdenable registros[],int n){
    int i,j;
    printf("INSERT SORT ordenando registros...\n");
    for(i=1;i<n;i++){
        j=i;
        while(j>0 && registros[j].clave<registros[j-1].clave){
            printf("cuando i=%d,j=%d\n",i,j);
            intercambia(&(registros[j]),&(registros[j-1]));
            listar(registros,n);
            j--;
        }
    }
    printf("Terminado.\n");
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
