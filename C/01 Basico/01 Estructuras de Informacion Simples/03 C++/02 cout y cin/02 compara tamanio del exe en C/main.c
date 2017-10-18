#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b,c;
    printf("Dame un entero\n");
    scanf("%d",&a);
    printf("Dame un flotante\n");
    scanf("%f",&b);
    c=a+b;
    printf("La suma es: %f\n",c);
    return 0;
}
