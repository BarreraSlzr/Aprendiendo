#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Algoritmo_Ordenamiento.h"
#include "Cuenta_Tiempo.h"
//#include "Cuenta_Tiempo_Segundos.h"

void inicializar(Persona profes[],int n);
int busquedaBinaria(RegistroOrdenable registros[],int n,tipo_clave x);
int binariaRecursiva(RegistroOrdenable registros[],int i,int j,tipo_clave x);

int main()
{
    int indice,n=5;
    tipo_clave clave=20;
    //tipo_clave clave=25;  //descomentar este y ver que pasa
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
    printf("Buscando clave %d...\n",clave);
    indice=busquedaBinaria(profesores,n,clave);
    if (indice==n){
        printf("No se encontro %d en el arreglo y si se quisiera insertar uno nuevo, seria al final",clave);
    }
    else if (profesores[indice].clave==clave){
        printf("Se encontro %d en el indice %d\n",clave,indice);
    }
    else{
        printf("No se encontro y la posicion donde lo insertaria es %d\n",indice);
    }
    pausar();

    char cad[15];
    printf("ahora con elementos repetidos\n");
    profesores[2].clave=20;
    strcpy(profesores[2].nombre,"Luis ");
    strcat(profesores[2].nombre,itoa(20, cad, 10));
    strcat(profesores[2].nombre,"o.");
    listar(profesores,n);
    indice=busquedaBinaria(profesores,n,clave);
    if (indice==n){
        printf("No se encontro %d en el arreglo y si se quisiera insertar uno nuevo, seria al final",clave);
    }
    else if (profesores[indice].clave==clave){
            printf("Se encontro %d en el indice %d\n",clave,indice);
    }
    else printf("No se encontro y la posicion donde lo insertaria es %d\n",
        indice);
    return 0;
}

int busquedaBinaria(RegistroOrdenable registros[],int n,tipo_clave x){
    if ((n<=0) || (x>registros[n-1].clave)){
        return n;
    }
    else if (x<registros[0].clave){
        return 0;
    }
    else return binariaRecursiva(registros,0,n-1,x);
}

int binariaRecursiva(RegistroOrdenable registros[],int i,int j,tipo_clave x){
    int k;
    if (i==j) return i;
    k=(i+j)/2;
    if (x<=registros[k].clave){
        return binariaRecursiva(registros,i,k,x);
    }
    else return binariaRecursiva(registros,k+1,j,x);
}

void imprimir(RegistroOrdenable x){
    printf("Clave=%d, Nombre=%s",x.clave,x.nombre);
}

void inicializar(Persona profes[],int n){
    int i,j,k;
    char cad[15];
    for(i=0,j=n;i<n;i++,j--){
        k=j*10;
        profes[i].clave=k;
        strcpy(profes[i].nombre,"Luis ");
        strcat(profes[i].nombre,itoa(k, cad, 10));
        strcat(profes[i].nombre,"o.");
    }
}
