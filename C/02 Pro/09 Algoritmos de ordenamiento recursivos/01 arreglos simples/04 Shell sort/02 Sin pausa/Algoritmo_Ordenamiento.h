#ifndef ALGORITMO_ORDENAMIENTO_H_INCLUDED
#define ALGORITMO_ORDENAMIENTO_H_INCLUDED
#include "Registro_Ordenable.h"

void shellSort(tipo_dato elementos[],int n);

void ordenar(tipo_dato elementos[],int n){
    shellSort(elementos,n);
}

void shellSort(tipo_dato elementos[],int n){
    int i,j,incremento;
    tipo_dato temp;

    printf("SHELL SORT ordenando elementos...\n");
    incremento=n/2;
    while(incremento>0){
        //printf("incremento=%d\n",incremento);
        for(i=incremento;i<n;i++){
            //printf("i=%d\n",i);
            j=i;
            temp=elementos[i];
            while((j>=incremento)&&(elementos[j-incremento]>temp)){
                elementos[j]=elementos[j-incremento];
                j=j-incremento;
            }
            elementos[j]=temp;
            //listar(elementos,n);
        }
        incremento/=2;
    }
    printf("Terminado.\n");
}



#endif // ALGORITMO_ORDENAMIENTO_H_INCLUDED
