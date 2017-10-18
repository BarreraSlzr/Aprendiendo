#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 2

void imprimeCelda(int matriz[][COLUMNAS],int fila,int columna){
    printf("matrix[%d][%d]=%d\n",fila,columna,matriz[fila][columna]);
}

int main()
{
    int matrix[FILAS][COLUMNAS];
    int i,j,valor;
    valor=1;
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            matrix[i][j]=valor++;
        }
    }
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            imprimeCelda(matrix,i,j);
        }
    }

    return 0;
}
