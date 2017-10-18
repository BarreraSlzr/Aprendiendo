#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;
    float flotante;
    printf("Dame un numero entero (diferente de cero):");
    entero=0;  //valor por defecto
    scanf("%d",&entero);
    if (entero!=0){//pensar positivo, el if haga el codigo cuando todo va bien
        printf("\nAhora uno flotante:");
        scanf("%f",&flotante);
        printf("\nTu numero entero es %d\n",entero);
        printf("y el flotante es %f\n",flotante);
    }
    else{//los else sean para los casos de error
        printf("error\n");
    }
    return 0;
}
