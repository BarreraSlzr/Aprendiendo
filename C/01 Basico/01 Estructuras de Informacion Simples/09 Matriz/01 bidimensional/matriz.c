#include <stdio.h>
#include <stdlib.h>

#define FILAS 2
#define COLUMNAS 2

int main()
{
    int matriz[FILAS][COLUMNAS];
    int fila,numero,columna;
    printf("Dame fila (1 a %d): ",FILAS);
    scanf("%d",&fila);
    printf("Dame columna (1 a %d): ",COLUMNAS);
    scanf("%d",&columna);
    printf("Dame el numero a guardar: ");
    scanf("%d",&numero);
    matriz[fila-1][columna-1]=numero;
    printf("matriz[1][1] = %d\n",matriz[0][0]);
    printf("matriz[1][2] = %d\n",matriz[0][1]);
    printf("matriz[2][1] = %d\n",matriz[1][0]);
    printf("matriz[2][2] = %d\n",matriz[1][1]);
    return 0;
}
