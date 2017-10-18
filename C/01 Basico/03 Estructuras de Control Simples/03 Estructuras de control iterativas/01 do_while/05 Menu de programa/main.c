#include <stdio.h>
#include <stdlib.h>

#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4
#define SALIR 5

int main()
{
    int opc;
    do{
        printf("Calculadora\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Dame la opcion: \n");
        scanf("%d",&opc);
        switch(opc){
        case SUMA:
            printf("Elegiste la suma\n");
            break;
        case RESTA:
            printf("Elegiste la resta\n");
            break;
        case MULTIPLICACION:
            printf("Elegiste la multiplicacion\n");
            break;
        case DIVISION:
            printf("Elegiste la division\n");
            break;
        case SALIR:
            printf("Elegiste salir\n");
            break;
        default:
            printf("Opcion no valida\n");
        }
        printf("\n");
    }
    while(opc!=SALIR);
    return 0;
}
