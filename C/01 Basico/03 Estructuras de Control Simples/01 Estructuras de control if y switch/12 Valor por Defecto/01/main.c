#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;
    float flotante;
    printf("Dame un numero entero (diferente de cero):");
    entero=0;  //valor por defecto
    scanf("%d",&entero);
    if (entero==0){
        printf("error\n");
    }
    else{
        printf("\nAhora uno flotante:");
        scanf("%f",&flotante);
        printf("\nTu numero entero es %d\n",entero);
        printf("y el flotante es %f\n",flotante);
    }
    return 0;
}
