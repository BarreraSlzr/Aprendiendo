#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

int encuentraPivote(tipo_dato elementos[],int i,int j);
int particion(tipo_dato elementos[],int i,int j,tipo_dato pivote);
void quickSort(tipo_dato elementos[],int i,int j,int n);
void quickSortInicial(tipo_dato elementos[],int n);

void ordenar(tipo_dato elementos[],int n){
    quickSortInicial(elementos,n);
}

void quickSortInicial(tipo_dato elementos[],int n){
    printf("QUICK SORT ordenando elementos...\n");
    quickSort(elementos,0,n-1,n);
    printf("Terminado.\n");
}

void quickSort(tipo_dato elementos[],int i,int j,int n){
    int k,posPivote;
    tipo_dato pivote;
    printf("Quick Sort desde %d hasta %d...\n",i,j);
    posPivote=encuentraPivote(elementos,i,j);
    printf("Pivote en indice %d\n",posPivote);
    if (posPivote>=0){
        pivote=elementos[posPivote];
        printf("Pivote valor %d\n",pivote);
        k=particion(elementos,i,j,pivote);
        printf("Particion hecha\n");
        listar(elementos,n);
        quickSort(elementos,i,k-1,n);
        quickSort(elementos,k,j,n);
    }
}

int encuentraPivote(tipo_dato elementos[],int i,int j){
    tipo_dato primeraClave;
    int k,pivote=-1;

    primeraClave=elementos[i];
    for(k=i+1;k<=j;k++){
        if (elementos[k]>primeraClave)
            return k;
        if (elementos[k]<primeraClave)
            return i;
    }
    /*for(k=i+1;k<=j;k++){
        if (elementos[k]>primeraClave){
            pivote=k;
            break;
        }
        if (elementos[k]<primeraClave){
            pivote=i;
            break;
        }
    }*/
    return pivote;
}

int particion(tipo_dato elementos[],int i,int j,tipo_dato pivote){
    int izq,der;
    izq=i;
    der=j;
    do{
        intercambia(&(elementos[izq]),&(elementos[der]));
        while(elementos[izq]<pivote){
            izq++;
        }
        while(elementos[der]>=pivote){
            der--;
        }
    }while(izq<der);
    return izq;
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
