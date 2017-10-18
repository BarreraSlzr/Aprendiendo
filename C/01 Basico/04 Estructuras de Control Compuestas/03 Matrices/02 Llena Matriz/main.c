#include <stdio.h>
#include <stdlib.h>

#define FILAS 2
#define COLUMNAS 2

int main()
{
    int m1[FILAS][COLUMNAS];
    int i,j,cuenta;

    cuenta=1;
    m1[0][0]=cuenta++;
    m1[0][1]=cuenta++;
    m1[1][0]=cuenta++;
    m1[1][1]=cuenta++;

    printf("Matriz m1:\n");
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
