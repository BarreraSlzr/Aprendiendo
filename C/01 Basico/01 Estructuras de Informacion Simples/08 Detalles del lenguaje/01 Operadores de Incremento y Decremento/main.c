#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float d,ingresosPorSalarios;
    char letra;
    a=10;
    printf("primero a=%d\n",a);
    b=a++;//notacion sufija
    printf("luego a=%d y b=%d\n",a,b);
    c=++a;//notacion prefija
    printf("ahora a=%d y c=%d\n",a,c);
    c--; //tambien le aplica notacion prefija y sufija
    printf("ahora a=%d y c=%d\n",a,c);
    d=0.5;
    d++;
    printf("d=%f\n",d);
    letra=65;
    letra++;
    printf("letra=%c\n",letra);
    ingresosPorSalarios=10000;
    ingresosPorSalarios=ingresosPorSalarios+1;//comentar esta
    //ingresosPorSalarios++;//descomentar esta otra
    printf("ingresosPorSalarios=%f\n",ingresosPorSalarios);
    return 0;
}
