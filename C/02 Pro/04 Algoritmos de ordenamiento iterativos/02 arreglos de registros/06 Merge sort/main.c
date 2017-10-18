#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Algoritmo_Ordenamiento.h"
#include "Cuenta_Tiempo.h"
//#include "Cuenta_Tiempo_Preciso.h"
//#include "Cuenta_Tiempo_Segundos.h"

void inicializar(Persona profes[],int n);

int main()
{
    int n=5;
    Persona profesores[n];
    inicializar(profesores,n);
    printf("Registros en un principio:\n");
    listar(profesores,n);
    iniciarCuentaTiempo();
    ordenar(profesores,n);
    terminarCuentaTiempo();
    printf("Registros al final:\n");
    listar(profesores,n);
    imprimirCuentaTiempo();
    return 0;
}

void imprimir(RegistroOrdenable x){
    printf("Clave=%d, Nombre=%s",x.clave,x.nombre);
}

void inicializar(Persona profes[],int n){
    int i,j;
    char cad[15];
    for(i=0,j=n;i<n;i++,j--){
        profes[i].clave=j;
        strcpy(profes[i].nombre,"Luis ");
        strcat(profes[i].nombre,itoa(j, cad, 10));
        strcat(profes[i].nombre,"o.");
    }
}
