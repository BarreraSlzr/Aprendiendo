#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void shellSort(RegistroOrdenable registros[],int n);

void ordenar(RegistroOrdenable registros[],int n){
    shellSort(registros,n);
}

void shellSort(RegistroOrdenable registros[],int n){
    int i,j,incremento;
    RegistroOrdenable temp;

    printf("SHELL SORT ordenando registros...\n");
    incremento=n/2;
    while(incremento>0){
        printf("incremento=%d\n",incremento);
        for(i=incremento;i<n;i++){
            printf("i=%d\n",i);
            j=i;
            temp=registros[i];
            while((j>=incremento)&&(registros[j-incremento].clave>temp.clave)){
                registros[j]=registros[j-incremento];
                j=j-incremento;
            }
            registros[j]=temp;
            listar(registros,n);
        }
        incremento/=2;
    }
    printf("Terminado.\n");
}



#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
