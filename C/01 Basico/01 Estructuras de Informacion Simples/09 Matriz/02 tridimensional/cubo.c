#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 3
#define PROFUNDIDAD 3

int main()
{
    int rubik[FILAS][COLUMNAS][PROFUNDIDAD];
    int numero,x,y,z;
    printf("Dame x (1 a %d): ",FILAS);
    scanf("%d",&x);
    printf("Dame y (1 a %d): ",COLUMNAS);
    scanf("%d",&y);
    printf("Dame z (1 a %d): ",PROFUNDIDAD);
    scanf("%d",&z);
    printf("Dame el numero a guardar: ");
    scanf("%d",&numero);
    rubik[--x][--y][--z]=numero;
    printf("rubik[%d][%d][%d] = %d\n",x,y,z,rubik[x][y][z]);
    return 0;
}
