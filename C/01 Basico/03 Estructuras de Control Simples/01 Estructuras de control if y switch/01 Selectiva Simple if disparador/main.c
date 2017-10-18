#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Dame un numero entero: ");
    scanf("%d",&num);
    if (num>0){ //disparador
        printf("\nEl numero %d es mayor que cero",num);
    }
    printf("\nbye bye\n");
    return 0;
}
