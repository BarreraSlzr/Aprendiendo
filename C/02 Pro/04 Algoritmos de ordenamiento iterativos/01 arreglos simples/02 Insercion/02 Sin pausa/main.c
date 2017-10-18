#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Algoritmo_Ordenamiento.h"
#include "Cuenta_Tiempo.h"
//#include "Cuenta_Tiempo_Preciso.h"
//#include "Cuenta_Tiempo_Segundos.h"

void inicializar(tipo_dato elementos[],int n);

int main()
{
    int n=50000;
    tipo_dato elementos[n];
    inicializar(elementos,n);
    //printf("En un principio:\n");
    //listar(elementos,n);
    iniciarCuentaTiempo();
    ordenar(elementos,n);
    terminarCuentaTiempo();
    //printf("Al final:\n");
    //listar(elementos,n);
    imprimirCuentaTiempo();
    return 0;
}

void imprimir(tipo_dato x){
    printf("valor=%d",x);
}

void inicializar(tipo_dato elementos[],int n){//inversamente ordenado
    int i,j;
    for(i=0,j=n;i<n;i++,j--){
        elementos[i]=j;
    }
}

/*void inicializar(tipo_dato elementos[],int n){//mejor caso
    int i;
    for(i=0;i<n;i++){
        elementos[i]=i;
    }
}*/
