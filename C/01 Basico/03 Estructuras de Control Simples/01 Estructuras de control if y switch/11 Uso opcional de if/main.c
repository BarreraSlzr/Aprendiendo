#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Dame un numero entero: ");
    scanf("%d",&num);
    if (num>0)
        printf("\nEl numero %d es mayor que cero",num); //sin las llaves
        //printf("\nEsto tambien lo hago si mayor que cero?");
    printf("\nbye bye\n");
    //aunque si funcione asi, se recomienda usar siempre llaves de ambito
    return 0;
}
