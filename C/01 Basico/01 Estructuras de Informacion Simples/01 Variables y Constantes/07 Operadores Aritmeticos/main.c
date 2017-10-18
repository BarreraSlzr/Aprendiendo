#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    float i,j,k;
    a=10;
    b=3;
    c=a-b;
    d=a*b; //multiplicacion
    e=a/b; //division
    f=a%b; //modulo
    g=a+b*2; //prioridad de operador multiplicacion
    h=(a+b)*2; //prioridad de operador agrupacion
    i=a;
    j=i/b;
    k=a/b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    printf("f=%d\n",f);
    printf("g=%d\n",g);
    printf("h=%d\n",h);
    printf("i=%f\n",i);
    printf("j=%f\n",j);
    printf("k=%f\n",k);
    return 0;
}
