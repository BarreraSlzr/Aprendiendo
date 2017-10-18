#include <stdio.h>
#include <stdlib.h>

int main()
{
    int verdadero=1;
    int falso=!verdadero;
    int a=0,b=1,c=0,d,e;
    printf("verdadero=%d\n",verdadero);
    printf("falso=%d\n",falso);
    printf("verdadero Y falso=%d\n",(verdadero&&falso));
    printf("verdadero O falso=%d\n",(verdadero||falso));
    d=a&&b&&c;
/*	and en corto circuito, provoca que ya no sean leidos b ni c*/
    e=a||b||c;
/*	or en corto circuito, provoca que ya no sea leido valor de c*/
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    return 0;
}
