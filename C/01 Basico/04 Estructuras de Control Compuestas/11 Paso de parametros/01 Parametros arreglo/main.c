#include <stdio.h>
#include <stdlib.h>

#define TOTAL_ENTEROS 4
#define TOTAL_REALES 4

int buscarMaximo(int vector[]){//es lo mismo si escribir (int* vector)
    int i,maximo;
    maximo=vector[0];
    for(i=1;i<TOTAL_ENTEROS;i++){
        if (maximo<vector[i]){
            maximo=vector[i];
        }
        //else seguir buscando
    }
    return maximo;
}

float promediar(float* vector){//es igual de la forma (float vector[])
    float promedio,suma;
    int i;
    for(i=0,suma=0;i<TOTAL_REALES;i++){
        suma+=vector[i];
    }
    promedio=suma/TOTAL_REALES;
    return promedio;
}

int main()
{
    int enteros[TOTAL_ENTEROS];
    float reales[TOTAL_REALES];
    float prom;
    int max;

    enteros[0]=95;
    enteros[1]=100;
    enteros[2]=80;
    enteros[3]=85;
    reales[0]=94;
    reales[1]=99;
    reales[2]=84;
    reales[3]=89;
    max=buscarMaximo(enteros);
    prom=promediar(reales);
    printf("el maximo encontrado es %d\n",max);
    printf("el promedio es %f\n",prom);
    return 0;
}
