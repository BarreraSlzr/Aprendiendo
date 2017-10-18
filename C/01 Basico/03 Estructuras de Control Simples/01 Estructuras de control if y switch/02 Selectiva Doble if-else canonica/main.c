#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Dame un numero entero: ");
    scanf("%d",&num);
    if (num>0){  //seleccion canonica
        printf("\nEl numero %d es mayor que cero",num);
    }
    else{
        printf("\nEl numero %d es cero o un negativo",num);
    }
    printf("\nbye bye\n");
    return 0;
}
