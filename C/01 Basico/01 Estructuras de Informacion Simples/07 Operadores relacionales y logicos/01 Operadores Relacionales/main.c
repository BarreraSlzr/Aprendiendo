#include <stdio.h>
#include <stdlib.h>

int main()
{
/*    Operadores Relacionales*/
    int a,b,c;
    printf("10>9 es %d\n",(10>9));
    printf("9>10 es %d\n",(9>10));

    a=10;
    b=9;
    printf("%d>%d es %d\n",a,b,(a>b));
    printf("%d>%d es %d\n",b,a,(b>a));
    c=a>b;
    printf("%d>%d es %d\n",a,b,c);
/*	deseable evitar imprimir operaciones en el printf*/
    c=b>a;
    printf("%d>%d es %d\n",b,a,c);
/*	otros operadores son: >=, <, <=, ==, !=*/
    return 0;
}
