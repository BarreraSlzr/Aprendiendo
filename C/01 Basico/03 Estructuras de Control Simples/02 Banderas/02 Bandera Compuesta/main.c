#include <stdio.h>
#include <stdlib.h>

#define ENERO 1
#define DICIEMBRE 12

int main()
{
    int mes;
    int mesValido;//bandera
    printf("dame un numero de mes:");
    scanf("%d",&mes);
    mesValido=(ENERO<=mes)&&(mes<=DICIEMBRE);
    //mesValido=(ENERO<=mes<=DICIEMBRE);//esto no funciona, siempre da verdadero
    if (mesValido){
        printf("es un mes valido\n");
    }
    else{
        printf("mes no valido\n");
    }
    return 0;
}
