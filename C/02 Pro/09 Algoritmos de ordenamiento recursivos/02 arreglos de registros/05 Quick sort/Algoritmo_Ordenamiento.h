#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

int encuentraPivote(RegistroOrdenable registros[],int i,int j);
int particion(RegistroOrdenable registros[],int i,int j,tipo_clave pivote);
void quickSort(RegistroOrdenable registros[],int i,int j,int n);
void quickSortInicial(RegistroOrdenable registros[],int n);

void ordenar(RegistroOrdenable registros[],int n){
    quickSortInicial(registros,n);
}

void quickSortInicial(RegistroOrdenable registros[],int n){
    printf("QUICK SORT ordenando registros...\n");
    quickSort(registros,0,n-1,n);
    printf("Terminado.\n");
}

void quickSort(RegistroOrdenable registros[],int i,int j,int n){
    int k,posPivote;
    tipo_clave pivote;
    printf("Quick Sort desde %d hasta %d...\n",i,j);
    posPivote=encuentraPivote(registros,i,j);
    printf("Pivote en indice %d\n",posPivote);
    if (posPivote>=0){
        pivote=registros[posPivote].clave;
        printf("Pivote valor %d\n",pivote);
        k=particion(registros,i,j,pivote);
        printf("Particion hecha\n");
        listar(registros,n);
        quickSort(registros,i,k-1,n);
        quickSort(registros,k,j,n);
    }
}

int encuentraPivote(RegistroOrdenable registros[],int i,int j){
    tipo_clave primeraClave;
    int k,pivote=-1;

    primeraClave=registros[i].clave;
    for(k=i+1;k<=j;k++){
        if (registros[k].clave>primeraClave)
            return k;
        if (registros[k].clave<primeraClave)
            return i;
    }
    /*for(k=i+1;k<=j;k++){
        if (registros[k].clave>primeraClave){
            pivote=k;
            break;
        }
        if (registros[k].clave<primeraClave){
            pivote=i;
            break;
        }
    }*/
    return pivote;
}

int particion(RegistroOrdenable registros[],int i,int j,tipo_clave pivote){
    int izq,der;
    izq=i;
    der=j;
    do{
        intercambia(&(registros[izq]),&(registros[der]));
        while(registros[izq].clave<pivote){
            izq++;
        }
        while(registros[der].clave>=pivote){
            der--;
        }
    }while(izq<der);
    return izq;
}

#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
