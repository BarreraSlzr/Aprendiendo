#include <stdio.h>
#include <stdlib.h>

#define FILAS 2
#define COLUMNAS 2

int main()
{
    int m1[FILAS][COLUMNAS];
    int i,j,cuenta;

    for(i=0,cuenta=1;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            m1[i][j]=cuenta++;
        }
    }

    printf("Matriz m1:\n");
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
