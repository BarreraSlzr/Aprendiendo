#include <stdio.h>
#include <stdlib.h>

#define COLUMNAS 3

int main()
{
    int v1[COLUMNAS];
    int v2[COLUMNAS];
    int i,cuenta;

    cuenta=1;
    v1[0]=cuenta;
    cuenta++;
    v1[1]=cuenta;
    cuenta++;
    v1[2]=cuenta;
    cuenta++;

    for(i=0;i<COLUMNAS;i++){
        v2[i]=cuenta++;
        //v2[i]=cuenta;
        //cuenta++;
    }

    printf("Vector v1:\n");
    for(i=0;i<COLUMNAS;i++){
        printf("%d\t",v1[i]);
    }
    printf("\n");

    printf("Vector v2:\n");
    for(i=0;i<COLUMNAS;i++){
        printf("%d\t",v2[i]);
    }
    printf("\n\n");

    return 0;
}
