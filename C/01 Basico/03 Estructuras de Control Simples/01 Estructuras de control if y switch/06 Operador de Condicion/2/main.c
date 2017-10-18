#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Dame el valor de b:");
    scanf("%d",&b);
    a=(b>10)?10:20;
    printf("a=%d\n",a);
    return 0;
}
