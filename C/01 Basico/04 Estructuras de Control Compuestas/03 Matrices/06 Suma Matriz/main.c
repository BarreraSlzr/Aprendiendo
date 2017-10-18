#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 3

int main()
{
    int m1[FILAS][COLUMNAS];
    int m2[FILAS][COLUMNAS];
    int sumaMatricial[FILAS][COLUMNAS];
    int i,j,cuenta;

    for(i=0,cuenta=1;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            m1[i][j]=cuenta++;
            m2[i][j]=cuenta++;
        }
    }

    printf("Matriz m1:\n");
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz m2:\n");
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            sumaMatricial[i][j]=m1[i][j]+m2[i][j];
        }
    }

    printf("Suma matricial:\n");
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            printf("%d\t",sumaMatricial[i][j]);
        }
        printf("\n");
    }

    return 0;
}
