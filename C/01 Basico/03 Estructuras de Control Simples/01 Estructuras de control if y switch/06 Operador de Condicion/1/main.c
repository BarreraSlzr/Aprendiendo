#include <stdio.h>
#include <stdlib.h>

int main()
{
    int verdadero=1;
    int falso=0;
    int a;
    a=(verdadero)?10:20;
    printf("si verdadero, a=%d\n",a);
    a=(falso)?10:20;
    printf("si falso, a=%d\n",a);
    return 0;
}
