#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c;
    a=10;
    c=a; 
/*	la promocion es automatica*/
    printf("a=%d\n",a);
    printf("c=%f\n\n",c);
    b=4;
    c=a/b; /*division entera*/
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%f\n\n",c);
	c=5/9;/*c=(float)a/b; 	casting de "a"
    c=(float)(a/b); //casting incorrecto
    c=(a+b+1)/2; //sin casting
    c=(float)(a+b+1)/2; //casting apropiado
    c=5/9;
	c=5.0/9;*/
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%f\n\n",c);
    return 0;
}
