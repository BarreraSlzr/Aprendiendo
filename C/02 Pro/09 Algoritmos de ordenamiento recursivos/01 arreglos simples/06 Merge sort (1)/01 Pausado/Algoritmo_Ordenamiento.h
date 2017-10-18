#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void mergeSortInicial(tipo_dato elementos[],int n);
void mergeSort(tipo_dato elementos[],int n);
void fusion(tipo_dato arr1[],int n1,tipo_dato arr2[],int n2,tipo_dato destino[]);

void ordenar(tipo_dato elementos[],int n){
    mergeSortInicial(elementos,n);
}

void mergeSortInicial(tipo_dato elementos[],int n){
    printf("MERGE SORT ordenando elementos...\n");
    mergeSort(elementos,n);
    printf("Terminado.\n");
}

void mergeSort(tipo_dato elementos[],int n){
    tipo_dato *vector1, *vector2;
    int n1,n2,x,y;
    printf("vector inicial:\n");
    listar(elementos,n);
    if (n>1)
    {
        if (n%2==0){
            n1=n2=n/2;
        }
        else{
            n1=n/2;
            n2=n1+1;
        }
        vector1=(tipo_dato*)malloc(sizeof(tipo_dato)*n1);
        vector2=(tipo_dato*)malloc(sizeof(tipo_dato)*n2);
        for(x=0;x<n1;x++)
            vector1[x]=elementos[x];
        for(y=0;y<n2;x++,y++)
            vector2[y]=elementos[x];
        mergeSort(vector1,n1);
        mergeSort(vector2,n2);
        fusion(vector1,n1,vector2,n2,elementos);
        free(vector1);
        free(vector2);
    }
    printf("vector final:\n");
    listar(elementos,n);
}

void fusion(tipo_dato arr1[],int n1,tipo_dato arr2[],int n2,tipo_dato destino[]){
    int x1=0,x2=0,x3=0;

    while(x1<n1 && x2<n2){
        if (arr1[x1]<arr2[x2]) {
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
