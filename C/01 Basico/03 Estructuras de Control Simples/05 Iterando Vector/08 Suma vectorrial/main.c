#include <stdio.h>
#include <stdlib.h>

#define FILAS 3

int main()
{
    int v1[FILAS];
    int v2[FILAS];
    int sumaVectorial[FILAS];
    int i,cuenta;

    cuenta=1;
    for(i=0;i<FILAS;i++){
        v1[i]=cuenta++;
        v2[i]=cuenta++;
    }

    printf("Vector v1:\n");//visto como filas
    for(i=0;i<FILAS;i++){
        printf("%d\n",v1[i]);
    }

    printf("Vector v2:\n");//visto como filas
    for(i=0;i<FILAS;i++){
        printf("%d\n",v2[i]);
    }
    printf("\n");

    for(i=0;i<FILAS;i++){
        sumaVectorial[i]=v1[i]+v2[i];
    }

    printf("Suma vectorial:\n");
    for(i=0;i<FILAS;i++){
        printf("%d\n",sumaVectorial[i]);
    }
    printf("\n");
    return 0;
}
