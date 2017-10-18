#include <stdio.h>
#include <stdlib.h>

#define FILAS 2
#define COLUMNAS 2

int main()
{
    char m1[FILAS][COLUMNAS];
    int i,j;
    char letra;

    letra='A';
    m1[0][0]=letra++;
    m1[0][1]=letra++;
    m1[1][0]=letra++;
    m1[1][1]=letra++;

    printf("Matriz m1:\n");
    for(i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            printf("%c\t",m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
