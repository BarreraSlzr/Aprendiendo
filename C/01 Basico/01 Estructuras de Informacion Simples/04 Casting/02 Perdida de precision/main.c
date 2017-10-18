#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c;
    c=4.5;
    a=c; //perdida de precision, lenguaje Java no compilaria esto
    b=(int)c; //esta si la compilaria Java
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%f\n\n",c);
    return 0;
}
