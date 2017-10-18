#include <stdio.h>
#include <stdlib.h>

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
    switch(opc){//seleccion canonica
        case 1:
            printf("\nElegiste la suma");
            resultado=10+2;
            break;
        case 2:
            printf("\nElegiste la resta");
            resultado=10-2;
            break;
        case 3:
            printf("\nElegiste la multiplicacion");
            resultado=10*2;
            break;
        case 4:
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
