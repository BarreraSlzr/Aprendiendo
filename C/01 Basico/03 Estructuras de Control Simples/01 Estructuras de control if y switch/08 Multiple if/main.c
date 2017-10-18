#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc=0,resultado;
    int cociente,dividendo,divisor;
    printf("Elige una opcion de las siguientes:\n");
    printf("1. Hacer suma de 10 y 2\n");
    printf("2. Hacer resta de 10 y 2\n");
    printf("3. Hacer multiplicacion de 10 y 2\n");
    printf("4. Hacer division entera de 10 y 2\n");
    printf("Numero opcion: ");
    scanf("%d",&opc);
    if (opc==1){
        printf("\nElegiste la suma");
        resultado=10+2;
    }
    else if (opc==2){
        printf("\nElegiste la resta");
        resultado=10-2;
    }
    else if (opc==3){
        printf("\nElegiste la multiplicacion");
        resultado=10*2;
    }
    else if (opc==4){
        printf("\nElegiste la division");
        resultado=10/2;
    }
    else{
        printf("\nOpcion %d no valida",opc);
        resultado=1;// comentar esta
        //resultado=0;// que pasa si descomento esta otra?
    }
    dividendo=100;
    divisor=resultado;
    cociente=dividendo/divisor;
    printf("\nEl resultado es: %d\n",resultado);
    printf("\nEl cociente es: %d\n",cociente);
    return 0;
}
