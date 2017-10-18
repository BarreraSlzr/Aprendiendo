#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VALORES 3

void imprimirArreglo(int* arreglo);//es lo mismo que imprimirArreglo(int arreglo[])
void incrementarValores(int* arreglo);

int main()
{
    int valores[TOTAL_VALORES];
    valores[0]=2;
    valores[1]=3;
    valores[2]=4;
    imprimirArreglo(valores);
    incrementarValores(valores);
    imprimirArreglo(valores);
    incrementarValores(valores);
    imprimirArreglo(valores);
    return 0;
}

void imprimirArreglo(int* arreglo){//es lo mismo que int arreglo[]
    int i;
    printf("Contenido del arreglo:\n");
    for(i=0;i<TOTAL_VALORES;i++){
        printf("%d\n",arreglo[i]);
    }
}

void incrementarValores(int* arreglo){
    int i;
    for(i=0;i<TOTAL_VALORES;i++){
        arreglo[i]+=10;
    }
}

