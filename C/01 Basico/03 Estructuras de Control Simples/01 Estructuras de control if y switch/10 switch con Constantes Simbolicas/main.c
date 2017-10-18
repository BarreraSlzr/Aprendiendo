#include <stdio.h>
#include <stdlib.h>

#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4

int main()
{
    int opc=0,resultado;
    printf("Elige una opcion de las siguientes:\n");
    printf("1. Hacer suma de 10 y 2\n");
    printf("2. Hacer resta de 10 y 2\n");
    printf("3. Hacer multiplicacion de 10 y 2\n");
    printf("4. Hacer division entera de 10 y 2\n");
    printf("Numero opcion: ");
    scanf("%d",&opc);
    switch(opc){
        case SUMA:
            printf("\nElegiste la suma");
            resultado=10+2;
            break;
        case RESTA:
            printf("\nElegiste la resta");
            resultado=10-2;
            break;
        case MULTIPLICACION:
            printf("\nElegiste la multiplicacion");
            resultado=10*2;
            break;
        case DIVISION:
            printf("\nElegiste la division");
            resultado=10/2;
            break;
        default:
            printf("\nOpcion no valida");
            resultado=1;
    }
    printf("\nEl resultado es: %d\n",resultado);
    return 0;
}
