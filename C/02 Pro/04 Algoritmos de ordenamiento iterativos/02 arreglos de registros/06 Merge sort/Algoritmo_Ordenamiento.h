#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void mergeSortInicial(RegistroOrdenable registros[],int n);
void mergeSort(RegistroOrdenable registros[],int n);
void fusion(RegistroOrdenable arr1[],int n1,RegistroOrdenable arr2[],int n2,RegistroOrdenable destino[]);

void ordenar(RegistroOrdenable registros[],int n){
    mergeSortInicial(registros,n);
}

void mergeSortInicial(RegistroOrdenable registros[],int n){
    printf("MERGE SORT ordenando registros...\n");
    mergeSort(registros,n);
    printf("Terminado.\n");
}

void mergeSort(RegistroOrdenable registros[],int n){
    RegistroOrdenable *vector1, *vector2;
    int n1,n2,x,y;
    printf("vector inicial:\n");
    listar(registros,n);
    if (n>1)
    {
        if (n%2==0){
            n1=n2=n/2;
        }
        else{
            n1=n/2;
            n2=n1+1;
        }
        vector1=(RegistroOrdenable*)malloc(sizeof(RegistroOrdenable)*n1);
        vector2=(RegistroOrdenable*)malloc(sizeof(RegistroOrdenable)*n2);
        for(x=0;x<n1;x++)
            vector1[x]=registros[x];
        for(y=0;y<n2;x++,y++)
            vector2[y]=registros[x];
        mergeSort(vector1,n1);
        mergeSort(vector2,n2);
        fusion(vector1,n1,vector2,n2,registros);
        free(vector1);
        free(vector2);
    }
    printf("vector final:\n");
    listar(registros,n);
}

void fusion(RegistroOrdenable arr1[],int n1,RegistroOrdenable arr2[],int n2,RegistroOrdenable destino[]){
    int x1=0,x2=0,x3=0;

    while(x1<n1 && x2<n2){
        if (arr1[x1].clave<arr2[x2].clave) {
            destino[x3]=arr1[x1];
            x1++;
        }
        else{
            destino[x3]=arr2[x2];
            x2++;
        }
        x3++;
    }
    while(x1<n1){
        destino[x3]=arr1[x1];
        x1++;
        x3++;
    }
    while(x2<n2){
        destino[x3]=arr2[x2];
        x2++;
        x3++;
    }
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
