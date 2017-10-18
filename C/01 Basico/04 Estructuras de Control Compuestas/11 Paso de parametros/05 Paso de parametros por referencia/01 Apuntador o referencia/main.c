#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int* y;
    y=&x;
    printf("Dame un valor entero: ");
    scanf("%d",&x);
    printf("Valor escaneado es: %d\n",x);
    printf("Dame otro valor entero: ");
    scanf("%d",y);
    printf("Valor escaneado es: %d\n",x);
    printf("O bien: %d\n",*y);
    return 0;
}
