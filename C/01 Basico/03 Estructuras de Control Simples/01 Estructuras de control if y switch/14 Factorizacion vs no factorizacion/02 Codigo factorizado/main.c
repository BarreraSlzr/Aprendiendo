#include <stdio.h>
#include <stdlib.h>

#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4

int main()
{
    int opc=0,resultado,a,b;
    printf("Elige una opcion de las siguientes:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Numero opcion: ");
    scanf("%d",&opc);
    //a continuacion el codigo factorizado
    printf("\nDame el valor de a: ");
    scanf("%d",&a);
    printf("\nDame el valor de b: ");
    scanf("%d",&b);
    //luego lo no factorizable
    switch(opc){
        case SUMA:
            resultado=a+b;
            break;
        case RESTA:
            resultado=a-b;
            break;
        case MULTIPLICACION:
            resultado=a*b;
            break;
        case DIVISION:
            resultado=a/b;
            break;
        default:
            printf("\nOpcion no valida");
            resultado=0;
    }
    //a cotinuacion mas codigo factorizado
    printf("\nEl resultado es: %d\n",resultado);
    return 0;
}
