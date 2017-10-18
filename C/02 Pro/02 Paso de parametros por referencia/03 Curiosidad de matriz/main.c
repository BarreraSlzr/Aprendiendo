#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 2

void imprimeCelda(int* matriz,int fila,int columna){
    printf("matrix[%d][%d]=%d\n",fila,columna,matriz[fila*COLUMNAS+columna]);
}

int main()
{
    int matrix[FILAS][COLUMNAS];
    int i,j,valor;
    int* posicionDeMatrix=&matrix[0][0];
    valor=1;
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            matrix[i][j]=valor++;
        }
    }
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            imprimeCelda(posicionDeMatrix,i,j);
        }
    }

    printf("\n");
    for(i=0,j=FILAS*COLUMNAS;i<j;i++){
        printf("%d\n",posicionDeMatrix[i]);
    }

    return 0;
}
